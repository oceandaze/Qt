#include <stdio.h>
int main()
{
	int i, j, s = 0,  course[3], array[3][5];  //��������Ͷ�ά����
	printf("������ɼ���\n");
	for (i = 0; i < 3; i++)                                 //������ά������
	{
		for (j = 0; j < 5; j++)                            //������ά������
		{
			printf("array[%d][%d]=",i,j);
			scanf ("%d", &array[i][j]);                   //����ɼ�
			s = s + array[i][j];                           //����ɼ�
		}
		course[i] = s / 5;                                 //��ÿ�Ƶ�ƽ���ɼ�
		s = 0;                                               //���¸�ֵ
	}
	printf("��ѧ��ƽ���ɼ��ǣ�ȡ������:%d\n���ĵ�ƽ���ɼ��ǣ�ȡ������:%d\nӢ���ƽ���ɼ��ǣ�ȡ������:%d\n", course[0], course[1], course[2]);
	return 0;
}
