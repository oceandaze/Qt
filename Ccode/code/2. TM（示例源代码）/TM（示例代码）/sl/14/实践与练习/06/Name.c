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
    printf("����һ���ж��ټ����ߵ�?\n");
    scanf("%d", &n);								 
    printf("�������ļ�·��:\n");
    scanf("%s", filename);							 
    printf("���������ߵ����������ַ���绰��:\n");
    for (i = 0; i < n; i++)							 
    {
        printf("��%d��", i + 1);
        scanf("%s%s%s", info[i].name, info[i].adr, info[i].tel);
        save(filename, n);						 
    }
	printf("���ߵ���Ϣ���£�");
    show(filename, n);							 
    return 0;
}
