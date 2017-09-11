#include "NetDebugClientWnd.h"

NetDebugClientWnd::NetDebugClientWnd(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.pushButton_Switch, SIGNAL(clicked()), this, SLOT(OnSwitchBtnClicked()));
    connect(ui.pushButton_SendData, SIGNAL(clicked()), this, SLOT(OnSendDataBtnClicked()));
    connect(ui.pushButton_ClearReadData, SIGNAL(clicked()), this, SLOT(OnClearBtnClicked()));
}

void NetDebugClientWnd::OnSwitchBtnClicked()
{
    if (ui.pushButton_Switch->text() == "Switch-ON")
    {
        ui.pushButton_Switch->setText("Switch-OFF");
        initSocket();
    }
    else if (ui.pushButton_Switch->text() == "Switch-OFF")
    {
        ui.pushButton_Switch->setText("Switch-ON");
        closeSocket();
    }
}

void NetDebugClientWnd::initSocket()
{
    m_ServerIP = QHostAddress(ui.lineEdit_ServerIP->text());
    m_ServerPort = ui.lineEdit_ServerPort->text().toInt();
    m_UdpClient = new QUdpSocket(this);
    m_UdpClient->bind(m_ServerIP, m_ServerPort);
    connect(m_UdpClient, SIGNAL(readyRead()), this, SLOT(OnRecvData()));
}

void NetDebugClientWnd::closeSocket()
{
    m_UdpClient->close();
}

void NetDebugClientWnd::OnRecvData()
{
    while (m_UdpClient->hasPendingDatagrams())
    {
        QNetworkDatagram datagram = m_UdpClient->receiveDatagram();
        ui.textBrowser_ReadData->insertPlainText(datagram.data());
    }
}

void NetDebugClientWnd::OnSendDataBtnClicked()
{
    QByteArray datagram = ui.textEdit_SendData->toPlainText().toStdString().c_str();
    m_UdpClient->writeDatagram(datagram, m_ServerIP, m_ServerPort);
}

void NetDebugClientWnd::OnClearBtnClicked()
{
    ui.textBrowser_ReadData->clear();
}
