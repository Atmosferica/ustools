#include "slavethread.h"
#include <iostream>
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <QMutex>
#include <QString>
#include <unistd.h>
#include <qdebug.h>


SlaveThread::SlaveThread()
{
    qDebug() << "QUESTO DEVE ESSERE DIVERSO Creating new Thread" << QThread::currentThreadId();
}
SlaveThread::~SlaveThread()
{
    qDebug() << "Muore il thread" << QThread::currentThreadId();
    mutex.lock();
    qDebug() << "Fare cose";
    mutex.unlock();
    wait();
}

void SlaveThread::StartST()
{
    QMutexLocker locker(&mutex);
    qDebug() << "Thread StartST" << QThread::currentThreadId();
    qDebug() << "Setto un po' di cose";
    if(!isRunning())
        start();


}

void SlaveThread::run()
{
    mutex.lock();
    qDebug() << "Thread RUN" << QThread::currentThreadId();
    mutex.unlock();
    for(int i=0; i<1000; i++){
        qDebug() << i ;
        sleep(1);
    }

}


void SlaveThread::stopacquisition()
{
    qDebug() << "Bloccando il thread" << QThread::currentThreadId();
}


void SlaveThread::DoWork()
{
    qDebug() << "Start Acquisition ...";
    mutex.unlock();

}




