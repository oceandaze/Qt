#include<stdio.h>               /*包含头文件*/

int main()                      	/*主函数main*/
{
		int a[2][3],b[3][2];	    		/*定义两个数组*/
		int i,j;			        		/*用于控制循环*/

/*从键盘为数组元素赋值*/
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("输出二维数组:\n");	    		/*信息提示*/
/*显示二维数组元素赋值*/
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");	            /*使元素分行显示*/
		}
/*将数组a转置后存入数组b中*/
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				b[j][i] = a[i][j];
			}
		}
		printf("输出转化后的二维数组:\n");
/*转置后输出数组b中的元素*/
		for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");               /*使元素分行显示*/
		}
		return 0;
}
