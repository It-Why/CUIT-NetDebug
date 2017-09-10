/************************************************************************
// Visual Studio 2015 C++             
// UDP Server
// By:IT-Why 
// Date:2017.09.10
// www.itstep.top
*************************************************************************/
#pragma once
#pragma comment(lib, "ws2_32.lib")

#include <winsock2.h>

class UdpServer
{
public:
    UdpServer(int iListenPort);
    ~UdpServer();

private:
    SOCKET m_socketUdpServer;
    sockaddr_in m_sin;
};

