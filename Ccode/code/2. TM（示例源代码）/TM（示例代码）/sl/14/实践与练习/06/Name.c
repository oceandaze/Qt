#include <stdio.h>
#include<process.h>
struct address_list										 
{
    char name[10];
    char adr[20];
    char tel[9];
} info[100];
void save(char *name, int n)									 
{
    FILE *fp;									 
    int i;
    if ((fp = fopen(name, "wb")) == NULL)					 
    {
        printf("cannot open file\n");
        exit(0);
    }
    for (i = 0; i < n; i++)
        if (fwrite(&info[i], sizeof(struct address_list), 1, fp) != 1)		 
            printf("file write error\n");						 
    fclose(fp);											 
}
void show(char *name, int n)							 
{
    int i;
    FILE *fp;									 
    if ((fp = fopen(name, "rb")) == NULL)					 
    {
        printf("cannot open file\n");
        exit(0);
    } 
    for (i = 0; i < n; i++)
    {
        fread(&info[i], sizeof(struct address_list), 1, fp);	 
        printf("%15s%20s%20s\n", info[i].name, info[i].adr,info[i].tel);
    }
    fclose(fp);										 
}
int main()
{
    int i, n;								 
    char filename[50];							 
    printf("附近一共有多少家米线店?\n");
    scanf("%d", &n);								 
    printf("请输入文件路径:\n");
    scanf("%s", filename);							 
    printf("请输入米线店店铺名、地址、电话号:\n");
    for (i = 0; i < n; i++)							 
    {
        printf("第%d家", i + 1);
        scanf("%s%s%s", info[i].name, info[i].adr, info[i].tel);
        save(filename, n);						 
    }
	printf("米线店信息如下：");
    show(filename, n);							 
    return 0;
}
