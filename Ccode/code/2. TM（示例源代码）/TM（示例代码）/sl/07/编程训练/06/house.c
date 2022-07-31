#include<stdio.h>
int main()
{
	    double sum, m;
     int i = 0;
	    printf("请输入你想要买房子的总价格：");
	    scanf ("%lf",&m);
	    sum = m - 370000;
     printf("房子的总价是：%.1lf\n首付370000元之后还剩%.1lf元\n",m,sum);
	    printf("将所剩的%.1lf元进行分30年分期付款：\n",sum);
	    for ( i = 0; i < 30; i++)
	    {
		    sum *= 1.049;
	    }
	    sum/= 30;
	    sum = sum/12;
	    printf("从我买房子开始，接下来的30年每个月需要还%.2lf元钱\n",sum);
	    return 0;
}
