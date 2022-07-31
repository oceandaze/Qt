#include<stdio.h>
#define NUM 50
main()
{
	int i=0;
#if NUM>50										/*判断NUM是否大于50*/
	i++;
#endif
#if NUM==50
	i=i+50;
#endif
#if NUM<50
	i--;
#endif
	printf("目前的值是:%d\n",i);
}
