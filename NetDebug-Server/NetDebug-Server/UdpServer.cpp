#include "UdpServer.h"

UdpServer::UdpServer(int iListenPort)
{
    //����WinSock��
    WSADATA wsaData;
    WORD sockVersion = MAKEWORD(2, 2);
    if (WSAStartup(sockVersion, &wsaData) != 0)
    {
        //Failed to load WinSock
        return ;
    }

    //����SOCKET
    m_socketUdpServer = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (m_socketUdpServer == INVALID_SOCKET)
    {
        //Socket Error
        return ;
    }

    //��������˿ں͵�ַ
    m_sin.sin_family = AF_INET;
    m_sin.sin_port = htons(iListenPort);
    m_sin.sin_addr.S_un.S_addr = INADDR_ANY;
    if (bind(m_socketUdpServer, (sockaddr *)&m_sin, sizeof(m_sin)) == SOCKET_ERROR)
    {
        //Bind Error
        closesocket(m_socketUdpServer);
        return;
    }
}


UdpServer::~UdpServer()
{
}
