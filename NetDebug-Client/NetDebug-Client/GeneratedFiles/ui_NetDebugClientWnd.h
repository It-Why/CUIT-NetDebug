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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetDebugClientWnd
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_NetMode;
    QRadioButton *radioButton_Udp;
    QRadioButton *radioButton_Tcp;
    QFrame *line;
    QLabel *label_ServerIP;
    QLineEdit *lineEdit_ServerIP;
    QLabel *label_ServerPort;
    QLineEdit *lineEdit_ServerPort;
    QFrame *line_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_SendData;
    QTextEdit *textEdit_SendData;
    QPushButton *pushButton_SendData;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_ReadData;
    QTextBrowser *textBrowser_ReadData;
    QPushButton *pushButton_ClearReadData;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NetDebugClientWnd)
    {
        if (NetDebugClientWnd->objectName().isEmpty())
            NetDebugClientWnd->setObjectName(QStringLiteral("NetDebugClientWnd"));
        NetDebugClientWnd->resize(575, 421);
        centralWidget = new QWidget(NetDebugClientWnd);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_NetMode = new QLabel(centralWidget);
        label_NetMode->setObjectName(QStringLiteral("label_NetMode"));
        label_NetMode->setMaximumSize(QSize(150, 16777215));

        verticalLayout->addWidget(label_NetMode);

        radioButton_Udp = new QRadioButton(centralWidget);
        radioButton_Udp->setObjectName(QStringLiteral("radioButton_Udp"));
        radioButton_Udp->setMaximumSize(QSize(150, 16777215));
        radioButton_Udp->setChecked(true);

        verticalLayout->addWidget(radioButton_Udp);

        radioButton_Tcp = new QRadioButton(centralWidget);
        radioButton_Tcp->setObjectName(QStringLiteral("radioButton_Tcp"));
        radioButton_Tcp->setMaximumSize(QSize(150, 16777215));

        verticalLayout->addWidget(radioButton_Tcp);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setMaximumSize(QSize(150, 16777215));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_ServerIP = new QLabel(centralWidget);
        label_ServerIP->setObjectName(QStringLiteral("label_ServerIP"));
        label_ServerIP->setMaximumSize(QSize(150, 16777215));

        verticalLayout->addWidget(label_ServerIP);

        lineEdit_ServerIP = new QLineEdit(centralWidget);
        lineEdit_ServerIP->setObjectName(QStringLiteral("lineEdit_ServerIP"));
        lineEdit_ServerIP->setMaximumSize(QSize(120, 16777215));

        verticalLayout->addWidget(lineEdit_ServerIP);

        label_ServerPort = new QLabel(centralWidget);
        label_ServerPort->setObjectName(QStringLiteral("label_ServerPort"));
        label_ServerPort->setMaximumSize(QSize(150, 16777215));

        verticalLayout->addWidget(label_ServerPort);

        lineEdit_ServerPort = new QLineEdit(centralWidget);
        lineEdit_ServerPort->setObjectName(QStringLiteral("lineEdit_ServerPort"));
        lineEdit_ServerPort->setMaximumSize(QSize(120, 16777215));

        verticalLayout->addWidget(lineEdit_ServerPort);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setMaximumSize(QSize(150, 16777215));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        label_SendData = new QLabel(centralWidget);
        label_SendData->setObjectName(QStringLiteral("label_SendData"));

        verticalLayout_2->addWidget(label_SendData);

        textEdit_SendData = new QTextEdit(centralWidget);
        textEdit_SendData->setObjectName(QStringLiteral("textEdit_SendData"));

        verticalLayout_2->addWidget(textEdit_SendData);

        pushButton_SendData = new QPushButton(centralWidget);
        pushButton_SendData->setObjectName(QStringLiteral("pushButton_SendData"));

        verticalLayout_2->addWidget(pushButton_SendData);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, -1, -1);
        label_ReadData = new QLabel(centralWidget);
        label_ReadData->setObjectName(QStringLiteral("label_ReadData"));

        verticalLayout_3->addWidget(label_ReadData);

        textBrowser_ReadData = new QTextBrowser(centralWidget);
        textBrowser_ReadData->setObjectName(QStringLiteral("textBrowser_ReadData"));

        verticalLayout_3->addWidget(textBrowser_ReadData);

        pushButton_ClearReadData = new QPushButton(centralWidget);
        pushButton_ClearReadData->setObjectName(QStringLiteral("pushButton_ClearReadData"));

        verticalLayout_3->addWidget(pushButton_ClearReadData);


        horizontalLayout->addLayout(verticalLayout_3);

        NetDebugClientWnd->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NetDebugClientWnd);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 575, 23));
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
        NetDebugClientWnd->setWindowTitle(QApplication::translate("NetDebugClientWnd", "NetDebug-Client", Q_NULLPTR));
        label_NetMode->setText(QApplication::translate("NetDebugClientWnd", "NetMode:", Q_NULLPTR));
        radioButton_Udp->setText(QApplication::translate("NetDebugClientWnd", "UDP", Q_NULLPTR));
        radioButton_Tcp->setText(QApplication::translate("NetDebugClientWnd", "TCP", Q_NULLPTR));
        label_ServerIP->setText(QApplication::translate("NetDebugClientWnd", "ServerIP:", Q_NULLPTR));
        label_ServerPort->setText(QApplication::translate("NetDebugClientWnd", "ServerPort:", Q_NULLPTR));
        label_SendData->setText(QApplication::translate("NetDebugClientWnd", "SendData:", Q_NULLPTR));
        pushButton_SendData->setText(QApplication::translate("NetDebugClientWnd", "SendData", Q_NULLPTR));
        label_ReadData->setText(QApplication::translate("NetDebugClientWnd", "ReadData:", Q_NULLPTR));
        pushButton_ClearReadData->setText(QApplication::translate("NetDebugClientWnd", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NetDebugClientWnd: public Ui_NetDebugClientWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETDEBUGCLIENTWND_H
