#include <iostream>
#include <QApplication>
#include "callwainwind.h"
#include "ui_telephone.h"



int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    Callwainwind window(nullptr);
    Ui::MainWindow caller;

    caller.setupUi(&window);
    window.lineEdit = caller.lineEdit;
    window.show();
 

    return app.exec();
}