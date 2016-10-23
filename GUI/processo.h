#ifndef PROCESSO_H
#define PROCESSO_H

#include <QObject>
#include <QMutex>


class Processo : public QObject
{
    Q_OBJECT

public:
    Processo();
    ~Processo();
    QString portName;
    QString wait;

public slots:
    void process();
    void stopProcess();
    void restartProcess();


signals:
    void finished();
    void response(const QString &s);
    void error(QString err);
    void deviceLink();

private:
    QMutex mutex;

};

#endif // PROCESSO_H
