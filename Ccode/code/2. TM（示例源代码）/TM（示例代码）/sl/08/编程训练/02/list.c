#include<stdio.h>
int main()
{
	    int i;
	    char DailyUse[50] = { "ֽ��,ֽ��,������,ˮ��,������,����,�ҹ�,��Ь,С����" };
	    char MakeUp[200]  = { "��ʪ��װ,����cc,����˪,��ɹ˪,ü��,��Ӱɫ��,��ë��" };
	    char Sports[50]   = { "�˶���,��Ь,����,��ϥ,����,����,�٤��,�٤��" };
	    char Health[100]  = { "���׷�,�ڷ�Һ,�۲���Ħ��,Ѫѹ��,�ŵװ�Ħ��" };
	    printf("�Ա����ﳵ�嵥:\n\n");
      printf("====������Ʒ��:====\n");
	    for (i = 0; i < 50; i++)
	    {
		    printf("%c", DailyUse[i]);
	    }
	    printf("\n\n");
	    printf("====��ױƷ��:====\n");
	    for (i = 0; i < 200; i++)
	    {
		    printf("%c", MakeUp[i]);
	    }
	    printf("\n\n");
	    printf("====�˶�����Ʒ:====\n");
	    for (i = 0; i < 50; i++)
	    {
		    printf("%c", Sports[i]);
	     }
	    printf("\n\n");
	    printf("====��������Ʒ:====\n");
	    for (i = 0; i < 100; i++)
	    {
		    printf("%c", Health[i]);
	    }
	    printf("\n\n");
	    return 0;
}
