#include<stdio.h>                                    /*����ͷ�ļ�*/

int main()                                        /*������main*/
{
        char cGrade;                                    /*���������ʾ�����ļ���*/
        printf("������Ҫ�鿴�ȼ���\n");            /*��ʾ��Ϣ*/
        scanf("%c",&cGrade);                            /*��������ļ���*/
        printf("�ɼ�����:");                    /*��ʾ��Ϣ*/
        switch(cGrade)                                /*switch����ж�*/
        {
        case 'A':                                    /*��������ΪA�����*/
            printf("90~100\n");                        /*���������*/
            break;                                    /*����*/
        case 'B':                                    /*��������ΪB�����*/
            printf("80~89\n");                        /*���������*/
            break;                                    /*����*/
        case 'C':                                    /*��������ΪC�����*/
            printf("70~79\n");                        /*���������*/
            break;                                    /*����*/
        case 'D':                                    /*��������ΪD�����*/
            printf("60~69\n");                        /*���������*/
            break;                                    /*����*/
        case 'F':                                    /*��������ΪF�����*/
            printf("<60\n");                            /*���������*/
            break;                                    /*����*/
        default:                                        /*Ĭ�����*/
            printf("You enter the char is wrong!\n");    /*��ʾ����*/
            break;                                    /*����*/
        }
        return 0;                                     /*�������*/
}
