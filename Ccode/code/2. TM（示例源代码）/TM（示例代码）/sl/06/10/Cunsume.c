#include<stdio.h>
int main()
{
    float money=1026,m;                          /*�������money�������Ľ�� m�Ǵ���֮����������*/
    float rebate=0.0f;                         /*�����ۿ۱���*/
       int grade=(int)money/500;               /*����ȼ�*/
       switch(grade)                           /*���ݵȼ������ۿ�*/
       {
       case 0:                                 /*δ��500Ԫ*/
           rebate=0.0f;                        /*�ۿ�Ϊ0*/
           m=money;                            /*ԭ�۹���*/
         //  break;                              /*����*/
       case 1:                                 /*�պ���500Ԫ*/
           rebate=0.9f;                        /*�ۿ�Ϊ9��*/
           m=money*rebate;                      /*�����ۿ�֮��ķ���*/
          //break;                               /*����*/
       case 2:                                  /*��1000Ԫ*/
           rebate=0.8f;                         /*�ۿ�Ϊ8��*/
           m=money*rebate;                      /*�����ۿ�֮��ķ���*/
          //break;                               /*����*/
       case 4:                                  /*��2000Ԫ*/
           rebate=0.7f;                         /*�ۿ�Ϊ7��*/
           m=money*rebate;                       /*�����ۿ�֮��ķ���*/
           //break;                                /*����*/
       case 6:                                   /*��3000Ԫ*/
           rebate=0.6f;                          /*�ۿ�Ϊ6��*/
           m=money*rebate;                        /*�����ۿ�֮��ķ���*/
           //break;                                 /*����*/
	   default:
           rebate=0.5f;                             /*�ۿ�Ϊ5��*/
           m=money*rebate;                        /*����ķ���*/
		   //break;
       }
       printf("ԭ���ǣ�%f\n�˿ͽ����ܵ��ۿ�:%f\n",money,rebate);    /*���ԭ�ۺͶ�Ӧ�ۿ�*/
       printf("��ۺ���֧���Ľ��:%f\n",m);       /*������������*/
       return 0;
}