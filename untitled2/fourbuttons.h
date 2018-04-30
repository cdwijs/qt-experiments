#ifndef FOURBUTTONS_H
#define FOURBUTTONS_H

#include <QtWidgets>
#include <QWidget>
#include <QObject>

class FourButtons : public QWidget
{
    Q_OBJECT
public:
    explicit FourButtons(QWidget *parent=0);
private:
    QVBoxLayout *myLayout;
    QSplitter *myTopLine;
    QSplitter *myBotLine;
    QPushButton *myBtn1;
    QPushButton *myBtn2;
    QPushButton *myBtn3;
    QPushButton *myBtn4;
};

#endif // FOURBUTTONS_H
