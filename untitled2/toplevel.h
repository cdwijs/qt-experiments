#ifndef TOPLEVEL_H
#define TOPLEVEL_H

#include <QtWidgets>
#include <QWidget>
#include <QObject>

#include "fourbuttons.h"

class TopLevel : public QWidget
{
    Q_OBJECT
public:
    explicit TopLevel(QWidget *parent=0);
private:
    QWidget *centralWidget;
    QVBoxLayout *vlayout;
    FourButtons *myFourButtons;
    QPushButton *myButton;
};

#endif // TOPLEVEL_H
