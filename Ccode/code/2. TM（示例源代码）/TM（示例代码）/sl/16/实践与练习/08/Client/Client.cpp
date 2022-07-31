// Client.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include "winsock2.h"    
#include <time.h>                                    //引用头文件
#pragma comment (lib,"ws2_32.lib")    

using namespace std;
void main()
{
    WSADATA wsd;                                //定义WSADATA对象
    WSAStartup(MAKEWORD(2,2),&wsd);
    SOCKET      m_SockClient;
    sockaddr_in clientaddr;

    clientaddr.sin_family = AF_INET;                    //设置服务器地址家族
    clientaddr.sin_port = htons(4600);                    //设置服务器端口号
    clientaddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
    m_SockClient = socket ( AF_INET,SOCK_STREAM, 0 );
    int i = connect(m_SockClient,(sockaddr*)&clientaddr,sizeof(clientaddr));   //连接超时
	printf("连接:%d\n",i);
  
    while(1){
      char buffer[1024];
      // 接收
      int num = recv(m_SockClient,buffer,1024,0);                //阻塞
      if(num > 0) {
		  printf("// 写入文件%d bytes.\n",num);
      
        ofstream outfile("简历模板（下载）.doc",std::ofstream::binary | ofstream::app);
        outfile.write(buffer, num);
      }
      else {
		  printf("下载结束\n");
     
        break;
      }
    }

    shutdown(m_SockClient, SD_BOTH);
    closesocket(m_SockClient);
}
