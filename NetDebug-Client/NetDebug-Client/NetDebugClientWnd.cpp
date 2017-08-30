#include "NetDebugClientWnd.h"

NetDebugClientWnd::NetDebugClientWnd(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.pushButton_SendData, SIGNAL(clicked()), this, SLOT(OnSendDataBtnClicked()));
    connect(ui.pushButton_ClearReadData, SIGNAL(clicked()), this, SLOT(OnClearBtnClicked()));
}

void NetDebugClientWnd::OnSendDataBtnClicked()
{

}

void NetDebugClientWnd::OnClearBtnClicked()
{
    ui.textBrowser_ReadData->clear();
}
