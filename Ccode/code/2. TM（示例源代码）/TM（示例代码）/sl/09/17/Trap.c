#include<stdio.h>
#include<math.h>		/*����ͷ�ļ�math.h*/

int main()
{ 
	double fResultTan;	/*������������ֵ*/

	int Result;	
	Result=90+45;       /*�󶥽�*/
	fResultTan =tan(Result);	/*�������к���*/
	printf("��һ���ڽ���:%d\n",Result);	/*������ǽ��*/
    printf("����ֵ�ǣ�%f\n",fResultTan);/*������ǵ�����ֵ*/

	return 0;
}
   
