#include <stdio.h>

/*
  获取本地主机的 IP地址。
*/

#include <windows.h>
#include <winsock.h>
#include <string.h>

#pragma comment(lib,"wsock32.lib")
int main()
{
  char szHostname[256]="";
  struct hostent *pHostent = 0; 
  WSADATA w;
  WSAStartup(0x0101, &w); //这一行必须在使用任何SOCKET函数前写
  gethostname(szHostname, 256);
  pHostent = gethostbyname(szHostname);
  const char *IP =inet_ntoa(*((struct in_addr *)pHostent->h_addr_list[0]));//此处获得本机IP
  printf("* * * * * * * * * * * * * * * * * *\n");
  printf("   本机的IP地址是%s\n",IP);
  printf("* * * * * * * * * * * * * * * * * *\n");

  WSACleanup();
  return 0;
}

