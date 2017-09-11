#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NetDebugClientWnd.h"
#include <QUdpSocket>
#include <QNetworkDatagram>

class NetDebugClientWnd : public QMainWindow
{
    Q_OBJECT

public:
    NetDebugClientWnd(QWidget *parent = Q_NULLPTR);

private:
    void initSocket();
    void closeSocket();
    void OnRecvData();

private slots:
    void OnSwitchBtnClicked();
    void OnSendDataBtnClicked();
    void OnClearBtnClicked();

private:
    Ui::NetDebugClientWnd ui;
    QUdpSocket *m_UdpClient;
    QHostAddress m_ServerIP;
    int m_ServerPort;
};
