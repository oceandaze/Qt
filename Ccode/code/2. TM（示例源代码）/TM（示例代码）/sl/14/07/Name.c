#include<stdio.h>
#include<process.h>
struct address_list									/*����ṹ�壬�洢ʵϰ���ɼ���Ϣ*/
{
    char name[10];
    char adr[20];
    char tel[15];
} info[100];
void save(char *name, int n)							/*�Զ���save����*/
{
    FILE *fp;										/*����һ��ָ��FILE���ͽṹ���ָ�����*/
    int i;
    if((fp = fopen(name, "wb")) == NULL)					/*��ֻд��ʽ��ָ���ļ�*/
    {
        printf("���ܴ��ļ�\n");
        exit(0);
    }
    for(i = 0; i < n; i++)
        if(fwrite(&info[i], sizeof(struct address_list), 1, fp) != 1)	/*��һ�����������fp��ָ���ļ���*/
            printf("д������\n");					/*���д���ļ����ɹ������������*/
    fclose(fp);										/*�ر��ļ�*/
}
void show(char *name, int n)							/*�Զ���show����*/
{
    int i;
    FILE *fp;										/*����һ��ָ��FILE���ͽṹ���ָ�����*/
    if((fp = fopen(name, "rb")) == NULL)					/*��ֻ����ʽ��ָ���ļ�*/
    {
        printf("���ܴ��ļ�\n");
        exit(0);
    } 
    for(i = 0; i < n; i++)
    {
        fread(&info[i], sizeof(struct address_list), 1, fp);		/*��fp��ָ����ļ��������ݴ浽score������*/
        printf("%15s%20s%20s\n", info[i].name, info[i].adr,info[i].tel);
    }
    fclose(fp);										/*�ر��ļ�*/
}
int main()
{
    int i, n;										/*��������Ϊ��������*/
    char filename[50];								/*����Ϊ�ַ���*/
    printf("һ������?\n");
    scanf("%d", &n);									/*����ʵϰ����*/
    printf("�������ļ�·��:\n");
    scanf("%s", filename);							/*�����ļ�����·��������*/
    printf("��������������ַ���ֻ���\n");
    for (i = 0; i < n; i++)								/*����ʵϰ����Ϣ*/
    {
        printf("NO%d", i + 1);
        scanf("%s%s%s", info[i].name, info[i].adr, info[i].tel);
        save(filename, n);							/*���ú���save*/
    }
	printf("��Ϣ����:\n");
    show(filename, n);								/*���ú���show*/
}
