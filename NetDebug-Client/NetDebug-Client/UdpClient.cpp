#include "UdpClient.h"

UdpClient::UdpClient(int iServerPort, std::string strServerIP)
{
    //加载WinSock库
    WORD socketVerison = MAKEWORD(2, 2);
    WSADATA wsaData;
    if (WSAStartup(socketVerison, &wsaData) != 0)
    {
        //Failed to load WinSock
        return ;
    }

    //构造SOCKET
    m_socketUdpClient = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (m_socketUdpClient == INVALID_SOCKET)
    {
        //Socket Error!
        return ;
    }

    //客户端连接目的IP和端口
    m_sin.sin_family = AF_INET;
    m_sin.sin_port = htons(iServerPort);//设置服务器端口
    m_sin.sin_addr.S_un.S_addr = inet_addr(strServerIP.c_str());//设置服务器IP
    m_iAddrLen = sizeof(m_sin);
}

UdpClient::~UdpClient()
{
    closesocket(m_socketUdpClient);
    WSACleanup();
}

std::string UdpClient::SendMessage(const std::string strText)
{
    const char* sendData = strText.c_str();
    sendto(m_socketUdpClient, sendData, strlen(sendData), 0, (sockaddr *)&m_sin, m_iAddrLen);
    char recvData[1024];
    int ret = recvfrom(m_socketUdpClient, recvData, 1024, 0, (sockaddr *)&m_sin, &m_iAddrLen);
    if (ret > 0)
    {
        recvData[ret] = 0x00;
        return std::string(recvData);//返回接收到的消息
    }
    return std::string();
}
