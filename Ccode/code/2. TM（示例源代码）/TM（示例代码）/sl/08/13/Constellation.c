#include<stdio.h>

/*声明函数*/
void CelerityRun(int left, int right, int array[]);

int main()
{
	int i;
	int a[10];
	printf("为数组元素赋值：\n");
	/*通过键盘为数组元素赋值*/
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);	
	}

	/*从小到大排序*/
	CelerityRun(0,9,a);
printf("排序结果如下：\n");
	/*输出数组*/
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);					/*输出制表位*/
		if(i == 4)							/*如果是第5个元素*/
			printf("\n");					/*输出换行*/
	}
    printf("\n");
	return 0;								/*程序结束*/
}

void CelerityRun(int left, int right, int array[])
{
	int i,j; 
	int middle,iTemp; 
	i = left; 
	j = right; 
	middle = array[(left+right)/2];				/*求中间值*/
	do
	{ 
		while((array[i]<middle) && (i<right))		/*从左找小于中值的数*/
			i++;      
		while((array[j]>middle) && (j>left))		/*从右找大于中值的数*/ 
			j--; 
		if(i<=j)							/*找到了一对值*/ 
		{ 
			iTemp = array[i]; 
			array[i] = array[j]; 
			array[j] = iTemp; 
			i++; 
			j--; 
		} 
	}while(i<=j);							/*如果两边的下标交错，就停止（完成一次）*/ 

	/*递归左半边*/ 
	if(left<j) 
		CelerityRun(left,j,array); 
	/*递归右半边*/ 
	if(right>i) 
		CelerityRun(i,right,array); 
}
