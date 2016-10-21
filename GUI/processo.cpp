#include "processo.h"
#include <QObject>
#include <qdebug.h>
#include <QThread>
#include <iostream>
#include <unistd.h>
#include <QtSerialPort/QSerialPort>
#define DEBUG

Processo::Processo()
{
    //QMutexLocker locker(&mutex);
    mutex.lock();
}

Processo::~Processo()
{

}

void Processo::process()
{
    qDebug() << "Open Serial Connection. Thread: " << QThread::currentThreadId();




#ifndef DEBUG
    QSerialPort serial;
    int serialPortBaud = QSerialPort::Baud9600;
    serial.setBaudRate(serialPortBaud);
    serial.setBreakEnabled(false);
    serial.setDataBits(QSerialPort::Data8);


    while(1){
        serial.close();
        serial.setPortName(portName);
        if (!serial.open(QIODevice::ReadOnly)) {
            emit error(tr("Can't open %1, error code %2").arg(portName).arg(serial.error()));
            return;
        }else{
            emit deviceLink();
        }


        if(serial.waitForReadyRead(1)){
            QByteArray requestData = serial.readAll();
            while(serial.waitForReadyRead(10))
                requestData += serial.readAll();
            QString response(requestData);
            qDebug() << requestData;
            emit this->response(response);:
        }
    }
#else
    int count=0;
    emit deviceLink();
    for(int i=0; i<10; i++){
        qDebug() << count ;
        emit this->response(QString::number(count));
        count++;
        sleep(1);
    }
#endif

}

void Processo::endProcess()
{
    emit finished();
}

