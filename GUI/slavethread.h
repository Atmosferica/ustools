#ifndef SLAVETHREAD_H
#define SLAVETHREAD_H

#include <QThread>
#include <QMutex>


class SlaveThread : public QThread
{
    Q_OBJECT

public:
    SlaveThread();
    ~SlaveThread();

    //QObject *parent = new QThread()

    void StartST();
    void run();


signals:
    void WorkDone();


public slots:
    void DoWork();
    void stopacquisition();

private:
    QMutex mutex;

};

#endif // SLAVETHREAD_H
