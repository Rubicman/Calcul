#include "mainwindow.h"
#include "calcul.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyWindow *window = new MyWindow;
    window->show();

    Calcul *n = new Calcul;
    MyWindow::connect(n, SIGNAL(GetText()), window, SLOT(GetText()));
    MyWindow::connect(window, SIGNAL(PutText(QString)), n, SLOT(PutText(QString)));
    MyWindow::connect(window, SIGNAL(PushInt(char)), n, SLOT(PushInt(char)));
    MyWindow::connect(window, SIGNAL(PushDoing(char)), n, SLOT(PushDoing(char)));
    MyWindow::connect(window, SIGNAL(PushEnt()), n, SLOT(PushEnt()));
    MyWindow::connect(window, SIGNAL(PushC()), n, SLOT(PushC()));
    MyWindow::connect(n, SIGNAL(SetText(QString)), window, SLOT(SetText(QString)));
    return a.exec();
}
