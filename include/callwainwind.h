#pragma once
#include <QMainWindow>
#include <QtWidgets/QLineEdit>

class Callwainwind : public QMainWindow
{
    Q_OBJECT
public:
    QLineEdit *lineEdit = nullptr;
    Callwainwind(QWidget* parent = nullptr) : QMainWindow(parent) {}

public slots:
    void add0();
    void add1();
    void add2();
    void add3();
    void add4();
    void add5();
    void add6();
    void add7();
    void add8();
    void add9();
    void makeCall();
};