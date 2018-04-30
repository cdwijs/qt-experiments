#ifndef MIDLEVEL_H
#define MIDLEVEL_H

#include <QtWidgets>
#include <QWidget>
#include <QObject>

#include "fourbuttons.h"

class MidLevel : public QWidget
{
    Q_OBJECT
public:
    explicit MidLevel(QWidget *parent=0);
private:
    QPushButton *myButton;
    QVBoxLayout *myLayout;
    FourButtons *myFourButtons1;
    FourButtons *myFourButtons2;
    FourButtons *myFourButtons3;
    FourButtons *myFourButtons4;

};

#endif // MIDLEVEL_H
