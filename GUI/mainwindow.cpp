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
    connect(ui->BtnStop, SIGNAL(clicked()), this, SLOT(endProcess()));
    connect(ui->Btn1,SIGNAL(clicked()), this, SLOT(grabData()));

    connect(proc, SIGNAL(finished()), tt, SLOT(deleteLater()));
    connect(proc, SIGNAL(finished()),proc,SLOT(deleteLater()));
    connect(tt, SIGNAL(finished()), tt, SLOT(deleteLater()));


    connect(proc, &Processo::response , this, &MainWindow::writeData);
    connect(this, &MainWindow::stop, proc, &Processo::endProcess);

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

void MainWindow::grabData(){

    qDebug() << "grubdata " << QThread::currentThreadId();

    proc->portName = "/dev/"+ui->serialPortComboBox->currentText();
    qDebug() << proc->portName;
    tt->start();
}

void MainWindow::endProcess()
{
    qDebug() << "Ciao1" ;
    emit stop();
    proc->endProcess();
}

void MainWindow::writeData(const QString &s)
{
    size++;
    if(size == 20){
        responseTOT = "";
        size = 0;
    } else
        responseTOT += s + "\n";

    ui->outText->setText(responseTOT);

}
