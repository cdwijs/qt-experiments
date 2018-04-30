#include "fourbuttons.h"

FourButtons::FourButtons(QWidget *parent): QWidget(parent)
{
    myLayout = new QVBoxLayout();
    myTopLine = new QSplitter();
    myBotLine = new QSplitter();
    myBtn1 = new QPushButton();
    myBtn2 = new QPushButton();
    myBtn3 = new QPushButton();
    myBtn4 = new QPushButton();
    myTopLine->addWidget(myBtn1);
    myTopLine->addWidget(myBtn2);
    myBotLine->addWidget(myBtn3);
    myBotLine->addWidget(myBtn4);
    myLayout->addWidget(myTopLine);
    myLayout->addWidget(myBotLine);
    setLayout(myLayout);
}
