#include<stdio.h>

struct Student										/*ѧ���ṹ*/
{
	char cName[20];								/*����*/
	float fScore[3];									/*����*/
}student={"SuYuQun",98.5f,89.0,93.5f};					/*�������*/

void Display(struct Student* stu)						/*�β�Ϊ�ṹ�������ָ��*/
{
	printf("-----��Ϣ����-----\n");						/*��ʾ��Ϣ*/
	printf("����: %s\n",stu->cName);					/*ʹ��ָ�����ýṹ������еĳ�Ա*/
	printf("Ӣ��: %.2f\n",stu->fScore[2]);				/*���Ӣ��ķ���*/
	stu->fScore[2]=90.0f;							/*���ĳ�Ա������ֵ*/
}

int main()
{
	struct Student* pStruct=&student;  					/*����ṹ�����ָ��*/
	Display(pStruct);								/*���ú������ṹ������Ϊʵ�ν��д���*/
	printf("�޸�֮���Ӣ��: %.2f\n",pStruct->fScore[2]);		/*�����Ա��ֵ*/
	return 0;
}
