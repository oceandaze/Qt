#include<stdio.h>
int main()
{
	    double sum, m;
     int i = 0;
	    printf("����������Ҫ���ӵ��ܼ۸�");
	    scanf ("%lf",&m);
	    sum = m - 370000;
     printf("���ӵ��ܼ��ǣ�%.1lf\n�׸�370000Ԫ֮��ʣ%.1lfԪ\n",m,sum);
	    printf("����ʣ��%.1lfԪ���з�30����ڸ��\n",sum);
	    for ( i = 0; i < 30; i++)
	    {
		    sum *= 1.049;
	    }
	    sum/= 30;
	    sum = sum/12;
	    printf("�������ӿ�ʼ����������30��ÿ������Ҫ��%.2lfԪǮ\n",sum);
	    return 0;
}
