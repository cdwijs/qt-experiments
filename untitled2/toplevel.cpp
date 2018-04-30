#include "toplevel.h"

TopLevel::TopLevel(QWidget *parent): QWidget(parent)
{
    myButton = new QPushButton();

    myMidlevel1 = new MidLevel(this);
    myMidlevel2 = new MidLevel(this);

    centralWidget = new QWidget();
    vlayout = new QVBoxLayout;
    vlayout->addWidget(myButton);
    vlayout->addWidget(myMidlevel1);
    vlayout->addWidget(myMidlevel2);
    centralWidget->setLayout(vlayout);
    centralWidget->show();
}
