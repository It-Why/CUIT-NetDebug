/********************************************************************************
** Form generated from reading UI file 'NetDebugServerWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETDEBUGSERVERWND_H
#define UI_NETDEBUGSERVERWND_H

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

class Ui_NetDebugServerWndClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NetDebugServerWndClass)
    {
        if (NetDebugServerWndClass->objectName().isEmpty())
            NetDebugServerWndClass->setObjectName(QStringLiteral("NetDebugServerWndClass"));
        NetDebugServerWndClass->resize(600, 400);
        menuBar = new QMenuBar(NetDebugServerWndClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        NetDebugServerWndClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NetDebugServerWndClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        NetDebugServerWndClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(NetDebugServerWndClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        NetDebugServerWndClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(NetDebugServerWndClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NetDebugServerWndClass->setStatusBar(statusBar);

        retranslateUi(NetDebugServerWndClass);

        QMetaObject::connectSlotsByName(NetDebugServerWndClass);
    } // setupUi

    void retranslateUi(QMainWindow *NetDebugServerWndClass)
    {
        NetDebugServerWndClass->setWindowTitle(QApplication::translate("NetDebugServerWndClass", "NetDebugServerWnd", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NetDebugServerWndClass: public Ui_NetDebugServerWndClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETDEBUGSERVERWND_H
