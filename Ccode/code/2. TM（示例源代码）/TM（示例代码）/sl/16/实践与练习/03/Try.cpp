#include <stdio.h>

/*
  ��ȡ���������� IP��ַ��
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
  WSAStartup(0x0101, &w); //��һ�б�����ʹ���κ�SOCKET����ǰд
  gethostname(szHostname, 256);
  pHostent = gethostbyname(szHostname);
  const char *IP =inet_ntoa(*((struct in_addr *)pHostent->h_addr_list[0]));//�˴���ñ���IP
  printf("* * * * * * * * * * * * * * * * * *\n");
  printf("   ������IP��ַ��%s\n",IP);
  printf("* * * * * * * * * * * * * * * * * *\n");

  WSACleanup();
  return 0;
}

