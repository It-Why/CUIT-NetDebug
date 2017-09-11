#include "UdpServer.h"

UdpServer::UdpServer(int iListenPort)
{
    //加载WinSock库
    WSADATA wsaData;
    WORD sockVersion = MAKEWORD(2, 2);
    if (WSAStartup(sockVersion, &wsaData) != 0)
    {
        //Failed to load WinSock
        return ;
    }

    //构造SOCKET
    m_socketUdpServer = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (m_socketUdpServer == INVALID_SOCKET)
    {
        //Socket Error
        return ;
    }

    //构造监听端口和地址
    m_sin.sin_family = AF_INET;
    m_sin.sin_port = htons(iListenPort);
    m_sin.sin_addr.S_un.S_addr = INADDR_ANY;
    if (bind(m_socketUdpServer, (sockaddr *)&m_sin, sizeof(m_sin)) == SOCKET_ERROR)
    {
        //Bind Error
        closesocket(m_socketUdpServer);
        return;
    }

    sockaddr_in remoteAddr;
    int iAddrLen = sizeof(remoteAddr);
    while (true)
    {
        char recvData[255];
        int ret = recvfrom(m_socketUdpServer, recvData, 255, 0, (sockaddr *)&remoteAddr, &iAddrLen);
        if (ret > 0)
        {
            recvData[ret] = 0x00;

        }
    }
}

UdpServer::~UdpServer()
{
    closesocket(m_socketUdpServer);
    WSACleanup();
}

