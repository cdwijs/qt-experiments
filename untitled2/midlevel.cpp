#include "midlevel.h"

MidLevel::MidLevel(QWidget *parent)
{
    myFourButtons1 = new FourButtons(this);
    myFourButtons2 = new FourButtons(this);
    myFourButtons3 = new FourButtons(this);
    myFourButtons4 = new FourButtons(this);
    myButton = new QPushButton();
    myLayout = new QVBoxLayout;
    myLayout->addWidget(myButton);
    myLayout->addWidget(myFourButtons1);
    myLayout->addWidget(myFourButtons2);
    myLayout->addWidget(myFourButtons3);
    myLayout->addWidget(myFourButtons4);
    setLayout(myLayout);
}
