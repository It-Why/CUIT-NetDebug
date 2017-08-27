/********************************************************************************
** Form generated from reading UI file 'NetDebugClientWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETDEBUGCLIENTWND_H
#define UI_NETDEBUGCLIENTWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetDebugClientWnd
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NetDebugClientWnd)
    {
        if (NetDebugClientWnd->objectName().isEmpty())
            NetDebugClientWnd->setObjectName(QStringLiteral("NetDebugClientWnd"));
        NetDebugClientWnd->resize(600, 400);
        centralWidget = new QWidget(NetDebugClientWnd);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        NetDebugClientWnd->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NetDebugClientWnd);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        NetDebugClientWnd->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NetDebugClientWnd);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        NetDebugClientWnd->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NetDebugClientWnd);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NetDebugClientWnd->setStatusBar(statusBar);

        retranslateUi(NetDebugClientWnd);

        QMetaObject::connectSlotsByName(NetDebugClientWnd);
    } // setupUi

    void retranslateUi(QMainWindow *NetDebugClientWnd)
    {
        NetDebugClientWnd->setWindowTitle(QApplication::translate("NetDebugClientWnd", "NetDebugClientWnd", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NetDebugClientWnd: public Ui_NetDebugClientWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETDEBUGCLIENTWND_H
