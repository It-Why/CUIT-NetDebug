/************************************************************************
// Visual Studio 2015 C++
// UDP Server
// By:IT-Why
// Date:2017.09.10
// www.itstep.top
*************************************************************************/
#pragma once
#pragma comment(lib, "ws2_32.lib")

#include <string>
#include <WinSock2.h>
#include <stdio.h>

class UdpClient
{

public:
    UdpClient(int iServerPort, std::string strServerIP);
    ~UdpClient();

    std::string SendMessage(const std::string strText);

private:
    SOCKET m_socketUdpClient;//声明SOCKET
    sockaddr_in m_sin;//声明连接目的地址
    int m_iAddrLen;//声明地址长度
};

