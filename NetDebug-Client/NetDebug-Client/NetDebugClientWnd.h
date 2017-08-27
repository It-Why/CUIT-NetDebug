#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NetDebugClientWnd.h"

class NetDebugClientWnd : public QMainWindow
{
    Q_OBJECT

public:
    NetDebugClientWnd(QWidget *parent = Q_NULLPTR);

private:
    Ui::NetDebugClientWndClass ui;
};
