#include<stdio.h>
#include<math.h>		/*包含头文件math.h*/

int main()
{ 
	double fResultTan;	/*用来保存正切值*/

	int Result;	
	Result=90+45;       /*求顶角*/
	fResultTan =tan(Result);	/*调用正切函数*/
	printf("另一个内角是:%d\n",Result);	/*输出顶角结果*/
    printf("正切值是：%f\n",fResultTan);/*输出顶角的正切值*/

	return 0;
}
   
