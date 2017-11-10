#include "mainwindow.h"

MyWindow::MyWindow(QWidget *parent) : QDialog(parent)
{
    ph_1 = new QPushButton("1");
    ph_2 = new QPushButton("2");
    ph_3 = new QPushButton("3");
    ph_4 = new QPushButton("4");
    ph_5 = new QPushButton("5");
    ph_6 = new QPushButton("6");
    ph_7 = new QPushButton("7");
    ph_8 = new QPushButton("8");
    ph_9 = new QPushButton("9");
    ph_0 = new QPushButton("0");

    ph_plus = new QPushButton("+");
    ph_minus = new QPushButton("-");
    ph_div = new QPushButton("/");
    ph_mn = new QPushButton("*");
    ph_pow = new QPushButton("^");
    ph_clean = new QPushButton("C");
    ph_ent = new QPushButton("Enter");

    lbl = new QLineEdit("0");

    ph_ent->setDefault(true);

    QVBoxLayout *vlayout = new QVBoxLayout;

    QHBoxLayout *hlayout = new QHBoxLayout;
    hlayout->addWidget(ph_1);
    hlayout->addWidget(ph_2);
    hlayout->addWidget(ph_3);
    vlayout->addLayout(hlayout);

    hlayout = new QHBoxLayout;
    hlayout->addWidget(ph_4);
    hlayout->addWidget(ph_5);
    hlayout->addWidget(ph_6);
    vlayout->addLayout(hlayout);

    hlayout = new QHBoxLayout;
    hlayout->addWidget(ph_7);
    hlayout->addWidget(ph_8);
    hlayout->addWidget(ph_9);
    vlayout->addLayout(hlayout);

    vlayout->addWidget(ph_0);

    QVBoxLayout *loyout = new QVBoxLayout;

    hlayout = new QHBoxLayout;
    hlayout->addWidget(ph_plus);
    hlayout->addWidget(ph_minus);
    loyout->addLayout(hlayout);

    hlayout = new QHBoxLayout;
    hlayout->addWidget(ph_div);
    hlayout->addWidget(ph_mn);
    loyout->addLayout(hlayout);

    hlayout = new QHBoxLayout;
    hlayout->addWidget(ph_pow);
    hlayout->addWidget(ph_ent);
    loyout->addLayout(hlayout);

    hlayout = new QHBoxLayout;
    hlayout->addLayout(vlayout);
    hlayout->addLayout(loyout);

    vlayout = new QVBoxLayout;
    vlayout->addWidget(lbl);
    vlayout->addWidget(ph_clean);
    vlayout->addLayout(hlayout);

    connect(ph_0, SIGNAL(clicked()), this, SLOT(Push0()));
    connect(ph_1, SIGNAL(clicked()), this, SLOT(Push1()));
    connect(ph_2, SIGNAL(clicked()), this, SLOT(Push2()));
    connect(ph_3, SIGNAL(clicked()), this, SLOT(Push3()));
    connect(ph_4, SIGNAL(clicked()), this, SLOT(Push4()));
    connect(ph_5, SIGNAL(clicked()), this, SLOT(Push5()));
    connect(ph_6, SIGNAL(clicked()), this, SLOT(Push6()));
    connect(ph_7, SIGNAL(clicked()), this, SLOT(Push7()));
    connect(ph_8, SIGNAL(clicked()), this, SLOT(Push8()));
    connect(ph_9, SIGNAL(clicked()), this, SLOT(Push9()));

    connect(ph_plus, SIGNAL(clicked()), this, SLOT(PushPlus()));
    connect(ph_minus, SIGNAL(clicked()), this, SLOT(PushMinus()));
    connect(ph_mn, SIGNAL(clicked()), this, SLOT(PushMn()));
    connect(ph_pow, SIGNAL(clicked()), this, SLOT(PushPow()));
    connect(ph_div, SIGNAL(clicked()), this, SLOT(PushDiv()));

    connect(ph_ent, SIGNAL(clicked()), this, SLOT(PushEnter()));
    connect(ph_clean, SIGNAL(clicked()), this, SLOT(PushClean()));

    setLayout(vlayout);
    setWindowTitle("Калькулятор");
}

void MyWindow::Push0()
{
    emit PushInt('0');
}

void MyWindow::Push1()
{
    emit PushInt('1');
}

void MyWindow::Push2()
{
    emit PushInt('2');
}

void MyWindow::Push3()
{
    emit PushInt('3');
}

void MyWindow::Push4()
{
    emit PushInt('4');
}

void MyWindow::Push5()
{
    emit PushInt('5');
}

void MyWindow::Push6()
{
    emit PushInt('6');
}

void MyWindow::Push7()
{
    emit PushInt('7');
}

void MyWindow::Push8()
{
    emit PushInt('8');
}

void MyWindow::Push9()
{
    emit PushInt('9');
}

void MyWindow::PushDiv()
{
    emit PushDoing('/');
}

void MyWindow::PushMinus()
{
    emit PushDoing('-');
}

void MyWindow::PushPlus()
{
    emit PushDoing('+');
}

void MyWindow::PushMn()
{
    emit PushDoing('*');
}

void MyWindow::PushPow()
{
    emit PushDoing('^');
}

void MyWindow::PushEnter()
{
    emit PushEnt();
}

void MyWindow::PushClean()
{
    emit PushC();
}
