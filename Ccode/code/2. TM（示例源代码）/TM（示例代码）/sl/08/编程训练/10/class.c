#include<stdio.h>
int main()
{
	int i, v0 = 0, v1 = 0, v2 = 0, v3 = 0, n, a[50];
	printf("请输入参加投票人数:\n");
	scanf("%d", &n); 								/*输入参加选举的人数*/
	printf("输入每个人所选的人（输入1、2、3即可）\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);						/*输入每个人所选的人*/
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			v1++;								/*统计1号候选人的票数*/
		}
		else if (a[i] == 2)
		{
			v2++;								/*统计2号候选人的票数*/
		}
		else if (a[i] == 3)
		{
			v3++;								/*统计三号候选人的票数*/
		}
		else
		{
			v0++;								/*统计无效票数*/
		}
	}
	printf("结果如下:\n");
	printf("候选人1:%d\n候选人2:%d\n候选人3:%d\n无效票数:%d\n",v1,v2,v3,v0); 	/*将统计的结果输出*/
	return 0;
}
