#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <unistd.h>
#include <QTimer>
#include <QtSerialPort/QSerialPort>
#include <QSerialPortInfo>
#include <qdebug.h>


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
<<<<<<< HEAD
    connect(ui->Btn1,SIGNAL(clicked()), this, SLOT(grabData()));
=======
    connect(ui->Btn1,SIGNAL(clicked()), this, SLOT(grubData()));
>>>>>>> 4801462... First Attempt to make a frendly GUI for UltraSonic anemometer control.
    connect(proc, &Processo::response , this, &MainWindow::writeData);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::errorPrint(){
    QString error;
    error = "Error!";
    ui->statusLab->setText(error);
    tt->quit();
}

void MainWindow::deviceLink()
{
    ui->statusLab->setText("Connect");

}

<<<<<<< HEAD
void MainWindow::grabData(){

    qDebug() << "grabdata " << QThread::currentThreadId();
=======
void MainWindow::grubData(){

    qDebug() << "grubdata " << QThread::currentThreadId();
>>>>>>> 4801462... First Attempt to make a frendly GUI for UltraSonic anemometer control.

    proc->portName = "/dev/"+ui->serialPortComboBox->currentText();
    qDebug() << proc->portName;
    tt->start();
}

void MainWindow::writeData(const QString &s)
{
    /*size++;
    if(size == 20){
        responseTOT = "";
        size = 0;
    } else
        responseTOT += s;

    ui->outText->setText(responseTOT);*/
    std::cout << "Prova" << s.toStdString() << std::endl;

}
