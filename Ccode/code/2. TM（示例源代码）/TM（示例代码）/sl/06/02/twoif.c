#include<stdio.h>
int main()
{
	int loc,ser;                                         /*�������locΪ��λ�ţ�serΪ����*/
	printf("�����빤λ�š����룺");
    scanf("%d,%d",&loc,&ser);                            /*���빤λ�ź�����*/
    if(loc==13&&ser==111)                                /*�ж������Ƿ���ͬ*/
        printf("лл����ǩ��\n");        
	if(loc!=13&&ser!=111)                                /*�ж������Ƿ񲻵���*/
        printf("�Բ��𣬹�λ�Ż������д���\n");           
    return 0;
}
