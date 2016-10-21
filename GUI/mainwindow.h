#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <slavethread.h>
#include <processo.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void errorPrint();
    void grabData();
    void endProcess();
    void deviceLink();
    void writeData(const QString &s);


private:
    Ui::MainWindow *ui;
    QThread *tt = new QThread;
    Processo* proc = new Processo();
    QString responseTOT = "";
    int size = 0;

signals:
    void stop();
};

#endif // MAINWINDOW_H
