#include<stdio.h>/*����ͷ�ļ�*/
int main() /*������main*/
{
    
    int  width=2,length=4,num;/*�������,Ϊ��������ֵ,��ʾ�ػ������*/
    float f=1.5f;/*��ʾ���ӹ��*/
    num= (int)(width/f) * (int)(length/f);  /*ǿ������ת�����������*/      
    printf("�ػ���һ����Է�%d������\n",num);/*��ʾ���*/              
    return 0;    /*�������*/                               
}