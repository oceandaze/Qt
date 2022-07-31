#include "stdafx.h"
#include <stdio.h>
#include <fstream.h>
#include <stdlib.h>
#include "winsock2.h"                        //引用头文件
#pragma comment (lib,"ws2_32.lib")            //引用库文件

//主函数
void main()
{
  WSADATA wsd;                        //定义WSADATA对象
  WSAStartup(MAKEWORD(2,2),&wsd);
  SOCKET      sockServer;
  sockaddr_in addrSrv;
  sockaddr_in addrCli;
  SOCKET m_Server[20];

  addrSrv.sin_family = AF_INET;            //设置服务器地址家族
  addrSrv.sin_port = htons(4600);          //设置服务器端口号
  addrSrv.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
  sockServer = socket ( AF_INET,SOCK_STREAM,  0);
  bind(sockServer,(sockaddr*)&addrSrv,sizeof(addrSrv));
  int len=sizeof(sockaddr);
  listen(sockServer,0);        //进行监听

  while(1) {
    //等待客户端连接
    SOCKET sockCli =accept(sockServer,(sockaddr*)&addrCli,&len); 
    // 如果有客户端连入
    if(sockCli!=INVALID_SOCKET) {
      const char * szFilename = "love.txt";
	  printf("有新户端连接入,发送视频文件%s\n" ,szFilename);
   
      ifstream ifs;
      ifs.open(szFilename, ifstream::binary);
      // 获取文件长度
      int length = 0;
      {
        ifs.seekg(0, ifs.end); // 移动到文件尾部
        length = ifs.tellg(); // 获取长度
        ifs.seekg(0, ifs.beg); // 移动到文件头部
      }
	  printf("文件长度:%d\n",length);
    

      // 读入所有文件内容
      char *pContent = new char [length];
      ifs.read(pContent, length);
      if(!ifs) {
		  printf("读取文件出错\n" );
      
        delete [] pContent;
      }
      // 回送登录成功消息
      int ires=send(sockCli, pContent, length,0);    //回送信息
      // 删除内存
      delete [] pContent;
    }
    // 关闭连接
    shutdown(sockCli, SD_BOTH);
    closesocket(sockCli);
  }
  WSACleanup();
}
