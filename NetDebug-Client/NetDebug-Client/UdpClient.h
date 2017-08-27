#pragma once

#include <string>
#include <WinSock2.h>
#include <stdio.h>

class UdpClient
{
public:
    UdpClient();
    ~UdpClient();

    void SetServerIP(std::string ServerIP);
    void SetServerPort(int ServerPort);
    void SendMessage(std::string SendBuffer);

private:
    std::string m_strServerIP;//服务器IP地址
    int m_iServerPort;//服务器端口号
    int m_iDataBuffer;//缓冲区长度
};

