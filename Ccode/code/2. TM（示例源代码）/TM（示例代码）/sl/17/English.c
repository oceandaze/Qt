#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include<windows.h>

#define	CNO		4		//ѡ������
#define swap(type, x, y)   do { type t = x; x = y; y = t; } while (0)
void endgame();

void File_in();
void File_out();
void rule();
void Lost();
void choose();
int read();
int run();

int score = 0;
int HighScore = 0;
int	QNO;				//�������� 
char **cptr;			//ָ�����ĵ��ʵ�ָ������ 
char **eptr;			//ָ��Ӣ�ﵥ�ʵ�ָ������
						/*���ù��λ��*/
void gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

/*��ʼ����*/
void start()
{
	int n;
	int i, j = 1;
	gotoxy(23, 2);


	printf("Ӣ �� �� �� �� �� �� ϰ");
         			
	for (i = 6; i <= 12; i++)   	//������±߿�*
	{
		for (j = 7; j <= 54; j++)  //������ұ߿��
		{
			gotoxy(j, i);
			if (i == 6 || i == 12)
			{
				printf("*");
			}
			else if (j == 7 || j == 54)
			{
				printf("��");
			}
		}
	}
	gotoxy(15, 8);
	printf("1.��ʼ��ϰ");
	gotoxy(35, 8);
	printf("2.���ֹ���");
	gotoxy(15, 10);
	printf("3.�˳���ϰ");
	gotoxy(19, 13);
	printf("��ѡ��[1 2 3]:[ ]\b\b");        //\bΪ�˸�ʹ�ù�괦��[]�м�
	
	scanf("%d", &n);    		//����ѡ��
	switch (n)
	{
	case 1:
		system("cls");
		run();       //ѡ����
		break;
	case 2:
		rule();      	//���ֹ���
		break;
	case 3:
		exit(0);     		//�˳���Ϸ
		break;
	default:				//�����1~3֮���ѡ��
	
		gotoxy(40, 28);
		printf("������1~3֮�����!");
		getch();			//���������
		system("cls");		//����
		start();
	}
}
/*��ʾѡ��*/
void print(const int c[], int sw)
{
	int i;
	
	for (i = 0; i < CNO; i++)
		printf("(%d) %s  ", i, sw ? cptr[c[i]] : eptr[c[i]]);
	printf("��");
}

/*����ѡ�������ȷ���±�*/
int make(int c[], int n)
{
	int i, j, x;

	c[0] = n;						//�ڿ�ͷԪ���д�����ȷ�� 

	for (i = 1; i < CNO; i++) {
		do {						//���ɲ��ظ�������� 
			x = rand() % QNO;
			for (j = 0; j < i; j++)
				if (c[j] == x)		//�Ѿ���������ͬ������� 
					break;
		} while (i != j);
		c[i] = x;
	}

	j = rand() % CNO;
	if (j != 0)
		swap(int, c[0], c[j]);	    //�ƶ���ȷ��

	return j;
}
/*��ȡ����*/
int read()
{
	int	i;
	FILE *fp;
	char filename[30];

	printf("�����뵥�ʴ洢�ļ���:\n");

	scanf("%s", filename);
	if ((fp = fopen(filename, "r")) == NULL)
		return 1;

	fscanf(fp, "%d", &QNO);			//��ȡ��������

	if ((cptr = calloc(QNO, sizeof(char *))) == NULL) return 1;
	if ((eptr = calloc(QNO, sizeof(char *))) == NULL) return 1;

	for (i = 0; i < QNO; i++) {
		char etemp[1024];
		char ctemp[1024];
		fscanf(fp, "%s%s", etemp, ctemp);
		if ((eptr[i] = malloc(strlen(etemp) + 1)) == NULL) return 1;
		if ((cptr[i] = malloc(strlen(ctemp) + 1)) == NULL) return 1;
		strcpy(eptr[i], etemp);
		strcpy(cptr[i], ctemp);
	}
	fclose(fp);

	return 0;
}
/*��ϰ����*/
void endgame()
{
	system("cls");
	Lost();

	gotoxy(35, 10);
	printf("�ۺϱ����ɼ������ĵ÷���%d", score);
	if (score >= HighScore)
	{

		gotoxy(33, 12);
		printf("����¼������߷ֱ���ˢ���������������\n");
		File_in();              //����߷�д���ļ�
	}
	else
	{

		gotoxy(33, 12);
		printf("����Ŭ����~ ������߷ֻ��%d\n", HighScore - score);
	}
	choose();
}
/*�߿�����ķ�֧ѡ��*/
void choose()
{
	int n;
	gotoxy(25, 23);

	printf("��Ҫ������һ��-------1");
	gotoxy(52, 23);
	printf("�����ˣ��˳���-------2");
	gotoxy(46, 25);

	printf("ѡ��");

	scanf("%d", &n);
	switch (n)
	{
	case 1:
		system("cls");          //����
		score = 0;                //��������
		start();
		break;
	case 2:
		exit(0);                //�˳���Ϸ
		break;
	default:
		gotoxy(35, 27);

		printf("�����������������������������");
		system("pause >nul");
		endgame();
		choose();
		break;
	}

}
/*ʧ�ܽ���*/
void Lost()
{
	int i;
	system("cls");
	gotoxy(17, 5);

	printf("+-------------------------");

	gotoxy(31, 5);

	printf("������");
	gotoxy(40, 5);

	printf("-------------------");
	gotoxy(55, 5);

	printf("----------");
	gotoxy(65, 5);

	printf("-----------------+");


	for (i = 6; i <= 19; i++)        //���߿�
	{
		gotoxy(17, i);
		printf("|");
		gotoxy(82, i);
		printf("|");
	}

	gotoxy(17, 20);
	printf("+---------------------------------");

	gotoxy(52, 20);

	printf("���");

	gotoxy(60, 20);

	printf("----------------------+");

}
/*�ж�ѡ����*/
int run()
{
	int i;
	int nq, pq;			//��Ŀ��ź���һ�ε���Ŀ��� 
	int na;				//��ȷ�𰸵ı�� 
	int sw;				//��Ŀ���ԣ�0������/1��Ӣ�
	int retry;			//������ս��
	int cand[CNO];		//ѡ��ı��

	if (read() == 1) {
		printf("\a�����ļ���ȡʧ�ܡ�\n");
		return 1;
	}
	srand(time(NULL));	//�趨�����������

	pq = QNO;			//��һ�ε���Ŀ��ţ������ڵı�ţ�

	do {
		int no;

		do {						//�������ڳ���ĵ��ʵı��
			nq = rand() % QNO;
		} while (nq == pq);			//��������ͬһ������ 

		na = make(cand, nq);	//����ѡ�� 
		sw = rand() % 2;
	
		printf("��һ����%s��\n", sw ? eptr[nq] : cptr[nq]);

		do {
			print(cand, sw);	//��ʾѡ�� 
			scanf("%d", &no);
			if (no != na)
			{
		
				puts("�Բ������Ļش���󣬼���10��");
				score -= 10;
			}
		} while (no != na);

		puts("���Ļش���ȷ����ϲ��10��");
		score += 10;
		pq = nq;

		printf("����һ�Σ�0-��/1-�ǣ�");
		scanf("%d", &retry);
	} while (retry == 1);

	for (i = 0; i < QNO; i++) {
		free(eptr[i]);
		free(cptr[i]);
	}
	free(cptr);
	free(eptr);
	File_out();
	endgame();
	exit(0);
	return 0;
}
/*������߷ֽ��ļ�*/
void File_in()
{
	FILE *fp;
	fp = fopen("save.txt", "w+");       //�Զ�д�ķ�ʽ����һ����Ϊsave.txt���ļ�
	fprintf(fp, "%d", score);           //�ѷ���д���ļ���
	fclose(fp);                         //�ر��ļ�
}

/*���ļ��ж�ȡ��߷�*/
void File_out()
{
	FILE *fp;
	fp = fopen("save.txt", "a+");       //���ļ�save.txt
	fscanf(fp, "%d", &HighScore);       //���ļ��е���߷ֶ�����
	fclose(fp);                         //�ر��ļ�
}
/*���ֹ���*/
void rule()
{
	int i, j = 1;
	system("cls");

	gotoxy(44, 3);
	printf("���ֹ���");

	for (i = 6; i <= 22; i++)   //������±߿�===
	{
		for (j = 20; j <= 75; j++)  //������ұ߿�||
		{
			gotoxy(j, i);
			if (i == 6 || i == 22) printf("*");
			else if (j == 20 || j == 75) printf("*");
		}
	}

	gotoxy(30, 8);
	printf("����1: ��4��ѡ����ѡ���Ӧ�Ĵ���");

	gotoxy(30, 11);
	printf("����2: �ش���ȷ��10��");

	gotoxy(30, 14);
	printf("����3: �ش�������10��");

	gotoxy(30, 17);
	printf("����4: Esc:�˳���ϰ");
	getch();                //�����������������
	system("cls");
	start();
}
/*������*/
int main()
{
	start();
	run();
	return 0;
}