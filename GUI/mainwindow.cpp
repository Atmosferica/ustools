#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <unistd.h>
#include <QTimer>
#include <QFile>
#include <QtSerialPort/QSerialPort>
#include <QSerialPortInfo>
#include <qdebug.h>
#include <QMessageBox>



MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow)
{
    proc->moveToThread(tt);
    ui->setupUi(this);


    const auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos)
        ui->serialPortComboBox->addItem(info.portName());

    connect(proc, SIGNAL(error(QString)), this, SLOT(errorPrint()));
    connect(proc, SIGNAL(deviceLink()), this, SLOT(deviceLink()));
    connect(tt, SIGNAL(started()), proc, SLOT(process()));
    connect(ui->BtnStop, SIGNAL(clicked()), this, SLOT(endProcess()));
    connect(ui->Btn1,SIGNAL(clicked()), this, SLOT(grabData()));
    connect(proc, &Processo::response , this, &MainWindow::writeData);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::errorPrint(){
    QPalette palette;

    palette.setBrush( QPalette::Background, QBrush( Qt::red ) );

    QString error;
    error = "Error!";
    tt->quit();
    ui->labelStatus->setPalette(palette);
}

void MainWindow::deviceLink()
{
    QPalette palette;
    palette.setBrush( QPalette::Background, QBrush( Qt::green ) );
    palette.setBrush( QPalette::Background, QBrush( Qt::green ) );

    ui->labelStatus->setPalette(palette);

}

void MainWindow::grabData(){
    QString fileName = ui->plainTextEdit->toPlainText();

    if(fileName == ""){
        QMessageBox::information(0,"Load Parameters", "ERROR!\nField: Data File is empty. Please select a file name");
        return ;
    }
    file = new QFile(fileName);

    if(!file->open(QIODevice::ReadWrite | QFile::Truncate)){
        QMessageBox::information(0,"Open File", "ERROR!\nImpossible to open or create Data File");
        return;
    }

    ui->Btn1->setEnabled(false);
    qDebug() << "grabdata " << QThread::currentThreadId();

    proc->portName = "/dev/"+ui->serialPortComboBox->currentText();
    qDebug() << proc->portName;
    tt->start();
}

void MainWindow::endProcess()
{
    if(status_stop){
        proc->stopProcess();
        ui->BtnStop->setText("CONTINUE");
        status_stop = !status_stop;
    }else{

        ui->BtnStop->setText("STOP");
        proc->restartProcess();
        status_stop = !status_stop;
    }

}

void MainWindow::writeData(const QString &s)
{
    QTextStream out(file);
    out << s;
}
