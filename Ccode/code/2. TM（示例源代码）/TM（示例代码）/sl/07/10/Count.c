#include<stdio.h>

int main()
{
	int iStep;									/*�����������ʾ�ⲿѭ������*/
	int iSelect;									/*�����û�������ѡ��*/
	for(iStep=1;iStep<10;iStep++)					/*�ⲿ����ѭ��*/
	{
		printf("�����:%d\n",iStep);			/*����ѭ���Ĳ������ʾ*/
		do									/*ʹ��do��while������ѭ��*/
		{
			printf("������һ��ѡ����ţ�\n");		/*�����ʾ��Ϣ*/
			printf("(0 ���˳�,99 ����һ��)\n");
			scanf("%d",&iSelect);				/*�û�����ѡ��*/
			if(iSelect==0)						/*�ж�������Ƿ�Ϊ0*/
			{
				goto exit;						/*ִ��goto��ת���*/
			}
		}
		while(iSelect!=99);						/*�ж��û�����*/
	}
exit:											/*��ת���ִ��λ��*/
	printf("�˳�����!\n");						/*��ʾ���������Ϣ*/
	return 0;
}
