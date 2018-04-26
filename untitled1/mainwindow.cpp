#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

struct
{
    uint32_t driveProblem:1;
    uint32_t driveStatus:3;
    uint32_t motorOn:1;
    uint32_t referenceMode:1;
    uint32_t motorFailure:1;
    uint32_t unitMode:3;
    uint32_t gainScheduling:1;
    uint32_t homing:1;

    uint32_t programRunning:1;
    uint32_t currentLimit:1;
    uint32_t motionStatus:2;
    uint32_t recorderStatus:3;
    uint32_t hallSensors:3;
    uint32_t cpuStatus:1;
    uint32_t stoppedByLimit:1;
    uint32_t errorUserProgram:1;
}driveState;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<driveState.cpuStatus;
    driveState.cpuStatus=1;
    qDebug()<<driveState.cpuStatus;
    driveState.driveProblem=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
