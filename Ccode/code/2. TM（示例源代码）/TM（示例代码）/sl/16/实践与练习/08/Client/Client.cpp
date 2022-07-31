// Client.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include "winsock2.h"    
#include <time.h>                                    //����ͷ�ļ�
#pragma comment (lib,"ws2_32.lib")    

using namespace std;
void main()
{
    WSADATA wsd;                                //����WSADATA����
    WSAStartup(MAKEWORD(2,2),&wsd);
    SOCKET      m_SockClient;
    sockaddr_in clientaddr;

    clientaddr.sin_family = AF_INET;                    //���÷�������ַ����
    clientaddr.sin_port = htons(4600);                    //���÷������˿ں�
    clientaddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
    m_SockClient = socket ( AF_INET,SOCK_STREAM, 0 );
    int i = connect(m_SockClient,(sockaddr*)&clientaddr,sizeof(clientaddr));   //���ӳ�ʱ
	printf("����:%d\n",i);
  
    while(1){
      char buffer[1024];
      // ����
      int num = recv(m_SockClient,buffer,1024,0);                //����
      if(num > 0) {
		  printf("// д���ļ�%d bytes.\n",num);
      
        ofstream outfile("����ģ�壨���أ�.doc",std::ofstream::binary | ofstream::app);
        outfile.write(buffer, num);
      }
      else {
		  printf("���ؽ���\n");
     
        break;
      }
    }

    shutdown(m_SockClient, SD_BOTH);
    closesocket(m_SockClient);
}
