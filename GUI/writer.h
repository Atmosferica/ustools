#ifndef WRITER_H
#define WRITER_H
#include <QThread>
#include <QString>

#include <QObject>

class Writer : public QObject
{
    Q_OBJECT
    QThread workedThread;

public:
    explicit Writer(QObject *parent = 0);

signals:
    void wrote();

public slots:
    void doWork(const QString $parameters);

};

#endif // WRITER_H
