#include<stdio.h>
#include<string.h>

void bubble(int *arr,int len)
{

}
int main()
{
	int arr[10] = {4,9,10,3,5,7,1,2,6,8};
	char str[20] = {"1234567890"};
	int *p = arr;
	char *q = str;
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(p));
	printf("%d\n", strlen(str));
	printf("%d\n", strlen(q));
	printf("%d\n",sizeof(str));
	printf("%d\n",sizeof(q));
	system("pause");
	return 0;
}