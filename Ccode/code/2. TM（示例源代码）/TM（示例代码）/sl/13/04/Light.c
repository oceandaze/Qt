#include "stdio.h"                           					/*����ͷ�ļ�*/
#define iInput 19054                         					/*����꣬iInput���19054*/
int main()                                    					/*������main*/
{	
      printf("��ǰ�ǣ�%d\n", iInput);        					/*��ʾ�궨�������*/
 	#if iInput>0                                  				/*�ж�����*/
    if(iInput % 9527==0 && iInput %2 == 0)  					/*�ж��Ƿ��ܱ�9527������ż��*/
      printf("�ܱ�9527������ż��\n");       					/*�����Ϣ*/
 	#else 
   	#if iInput<0  
	    printf("��ǰΪ������%d\n", iInput); 					/*������*/
  	#else	
    	printf("���ܱ�9527������ż������ʱ����Ϊ��%d\n", iInput);/*��ʾ��������������*/
 	#endif 
 	#endif 
   	return 0;                               						/*�������*/
}
