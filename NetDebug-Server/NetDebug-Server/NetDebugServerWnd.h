#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NetDebugServerWnd.h"

class NetDebugServerWnd : public QMainWindow
{
    Q_OBJECT

public:
    NetDebugServerWnd(QWidget *parent = Q_NULLPTR);

private:
    Ui::NetDebugServerWndClass ui;
};
