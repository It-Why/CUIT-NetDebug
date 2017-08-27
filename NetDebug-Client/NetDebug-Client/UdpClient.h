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
    std::string m_strServerIP;//������IP��ַ
    int m_iServerPort;//�������˿ں�
    int m_iDataBuffer;//����������
};

