#include "toplevel.h"

TopLevel::TopLevel(QWidget *parent): QWidget(parent)
{
    myButton = new QPushButton();
    myFourButtons = new FourButtons(this);
    centralWidget = new QWidget();
    vlayout = new QVBoxLayout;
    vlayout->addWidget(myButton);
    vlayout->addWidget(myFourButtons);
    centralWidget->setLayout(vlayout);
    centralWidget->show();
}
