#include "UdpClient.h"

UdpClient::UdpClient()
{
    m_iDataBuffer = 1024;
    if (WSAStartup(MAKEWORD(2, 2), &m_wsaData) != 0)
    {
        //Failed to load WinSock
    }
}

UdpClient::~UdpClient()
{
}

void UdpClient::SetServerIP(std::string ServerIP)
{
    m_strServerIP = ServerIP;
}

void UdpClient::SetServerPort(int ServerPort)
{
    m_iServerPort = ServerPort;
}

void UdpClient::SendMessage(std::string SendBuffer)
{

}
