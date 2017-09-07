#include "NetDebugClientWnd.h"

NetDebugClientWnd::NetDebugClientWnd(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.pushButton_SendData, SIGNAL(clicked()), this, SLOT(OnSendDataBtnClicked()));
    connect(ui.pushButton_ClearReadData, SIGNAL(clicked()), this, SLOT(OnClearBtnClicked()));
}

void NetDebugClientWnd::OnSwitchBtnClicked()
{
    if (ui.pushButton_Switch->text() == "Switch-OFF")
    {
        ui.pushButton_Switch->setText("Switch-ON");
    }
    else if (ui.pushButton_Switch->text() == "Switch-OFF")
    {
        ui.pushButton_Switch->setText("Switch-OFF");
    }
}

void NetDebugClientWnd::OnSendDataBtnClicked()
{

}

void NetDebugClientWnd::OnClearBtnClicked()
{
    ui.textBrowser_ReadData->clear();
}
