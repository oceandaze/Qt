#include<stdio.h>
int per(int a,int b);
int  main()
{
	int iWidth,iLength,iResult;
	printf("�����볤���εĳ���\n");
	scanf("%d",&iLength);
	printf("�����볤���εĿ�\n");
	scanf("%d",&iWidth);
	iResult=per(iWidth,iLength);
	printf("�����ε��ܳ��ǣ�");
	printf("%d\n",iResult);
	return 0;
}

int per(int a,int b)
{
	return (a+b)*2;
}
