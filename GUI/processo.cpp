#include "processo.h"
#include <QObject>
#include <qdebug.h>
#include <QThread>
#include <iostream>
#include <unistd.h>
#include <QtSerialPort/QSerialPort>


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
    QSerialPort serial;
    int serialPortBaud = QSerialPort::Baud9600;
    serial.setBaudRate(serialPortBaud);


    while(1){
        serial.close();
        serial.setPortName(portName);
        if (!serial.open(QIODevice::ReadOnly)) {
            emit error(tr("Can't open %1, error code %2").arg(portName).arg(serial.error()));
            return;
        }else{
            emit deviceLink();
        }


        /*QByteArray requestData = serial.readLine();
        requestData.append(serial.readLine());*/
        char buf[1024];
        qint64 lineLength = serial.readLine(buf,sizeof(buf));

        std::cout << lineLength << std::endl;

        //QString response(requestData);
        //emit this->response(response);
        sleep(1);
    }
}

