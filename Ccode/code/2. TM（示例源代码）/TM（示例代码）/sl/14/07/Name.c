#include<stdio.h>
#include<process.h>
struct address_list									/*定义结构体，存储实习生成绩信息*/
{
    char name[10];
    char adr[20];
    char tel[15];
} info[100];
void save(char *name, int n)							/*自定义save函数*/
{
    FILE *fp;										/*定义一个指向FILE类型结构体的指针变量*/
    int i;
    if((fp = fopen(name, "wb")) == NULL)					/*以只写方式打开指定文件*/
    {
        printf("不能打开文件\n");
        exit(0);
    }
    for(i = 0; i < n; i++)
        if(fwrite(&info[i], sizeof(struct address_list), 1, fp) != 1)	/*将一组数据输出到fp所指的文件中*/
            printf("写入有误\n");					/*如果写入文件不成功，则输出错误*/
    fclose(fp);										/*关闭文件*/
}
void show(char *name, int n)							/*自定义show函数*/
{
    int i;
    FILE *fp;										/*定义一个指向FILE类型结构体的指针变量*/
    if((fp = fopen(name, "rb")) == NULL)					/*以只读方式打开指定文件*/
    {
        printf("不能打开文件\n");
        exit(0);
    } 
    for(i = 0; i < n; i++)
    {
        fread(&info[i], sizeof(struct address_list), 1, fp);		/*从fp所指向的文件读入数据存到score数组中*/
        printf("%15s%20s%20s\n", info[i].name, info[i].adr,info[i].tel);
    }
    fclose(fp);										/*关闭文件*/
}
int main()
{
    int i, n;										/*变量类型为基本整型*/
    char filename[50];								/*数组为字符型*/
    printf("一共几名?\n");
    scanf("%d", &n);									/*输入实习生数*/
    printf("请输入文件路径:\n");
    scanf("%s", filename);							/*输入文件所在路径及名称*/
    printf("请输入姓名，地址，手机号\n");
    for (i = 0; i < n; i++)								/*输入实习生信息*/
    {
        printf("NO%d", i + 1);
        scanf("%s%s%s", info[i].name, info[i].adr, info[i].tel);
        save(filename, n);							/*调用函数save*/
    }
	printf("信息如下:\n");
    show(filename, n);								/*调用函数show*/
}
