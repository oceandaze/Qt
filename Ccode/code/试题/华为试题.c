#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
void outstr(char*str);
void strsort(char * str);
void strnum(char * str);
void Stringchang(const char * input,char*output);
void stringsort(char*str1,char* str2);
int sum(char * str);
void stringdel(char*str1,char*str2);
int split(char*str ,int *arr);
void sort(int * arr,int n);
void decrypt(char * str);
int deletSubstr(char *str,char*son,char*out);
int eatPeach(int m);
int main()
{
	/*2��
	char str[100]={0};
	gets(str);
	outstr(str);
	puts(str);
	*/
	//4��
	/*
	char str[100]={0};
	int arr[100]={0};
	int n=0; 
	int i=0;
	char str2[100]={0};
	//scanf(��%[^\n]��,str);//scanf������ո��ַ���
	gets(str);
	n=split(str,arr);
	sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	//strsort(str);
	*/
//5���������
	/*
	char str[100]={0};
	scanf("%s",str);
	decrypt(str);
	printf(str);
	*/
	//6��
	
	//strnum(str);
	//puts(str);
	//printf("%d",sum(str));
	//7��
	int n=0;
	n=eatPeach(10);
	printf("%d",n);
	//10��
	/*
	char str[100]={0};
	char son[100]={0};
	char out[100]={0};
	int cnt=0;
	scanf("%s%s",str,son);
	cnt=deletSubstr(str,son,out);
	printf("%s %d\n",out,cnt);
	*/
	//stringdel(str,str2);
	//12��
	//Stringchang(str,str2);
	//puts(str2);
	//17��

	//stringsort(str,str2);
	//puts(str);
	return 0;
}
/*1,����: �������ı��İ�����ת������һ�����ĺ������ ת���������£� �������������0x7E��
ת���Ϊ2���ֽ�0x7D 0x5E���������0x7D��ת���Ϊ2���ֽ�0x7D 0x5D������ڱ���ͷβ������һ��0x7E���硣
 ʾ����ÿ���ֽ���ʮ����������ʾ�� ����ԭʼ���ģ�*/



 //2,����һ���ַ����������д�д��ĸת��Ϊ��ӦСд��ĸ֮��ĵ������ĸ����ԭʼ��д��ĸΪV��Z,
 //��ת��Ϊ��ӦСд��ĸ��ֵ��21�������ַ����䣬���ת��

void outstr(char*str)
{
	int i=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(isupper(str[i]))
		{
			if('V'<=str[i]&&str[i]<='Z')
			{
				str[i]=str[i]+32-21;
			}
			else
			{
				str[i]=str[i]+32+5;
			}
		}
	}
}


//3, ʱ����Ӻ���(��������08:12:30��05:24:21,���13:36:51)



 /*4, �����ַ������кܶ���������Ҫ�����Щ��������������Ȼ�󷵻������ָ��λ�õ�������
	����Ҫ�󣺰���ÿ���������ĺ���λ������ɵ��������д�С��������
	1�����������λ������ʵ��λ����ɵ��������бȽ�
	2�������ȣ����������ַ����е�ԭʼ˳������
	˵�����������ݿ��������飬�����߱�֤����
	1) �ַ����ԡ�\0����β�����������֡��ո�
	2) �ַ�����������֮���Ե����ո�ָ����ַ�����βû�пո�
	3) ��������ʽΪʮ���ƣ���С��1~1000000�������������ַ��㿪ʼ
	ʾ��:
	���ַ�������?
	1223 22 3232 2016
	���չ涨�����
	2016 22 1223 3232
*/

void strsort(char * str)
{
	char*p=str;
	int arr[100]={0};
	int i=0;
	int j=0;
	int m=0;
	int temp=0;
	while(p=strtok(p," "))
	{
		sscanf(p,"%d",&arr[m++]);
		p=NULL;
	}
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-1-i;j++)
		{
			if(arr[j]%1000>arr[j+1]%1000)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	str[0]='\0';
	for(i=0;i<m;i++)
	{
		sprintf(str+strlen(str),"%d ",arr[i]);
	}
	//str[m]='\0';
}

//��ʦ����
int split(char*str ,int *arr)
{
	int n=0;
	char*p=str;
	while(p=strtok(p," "))
	{
		sscanf(p,"%d",&arr[n++]);
		p=NULL;
	}
	return n;
}

void sort(int * arr,int n)
{
	int i=0;
	int j=0;
	int temp=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]%1000>arr[j+1]%1000)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}



/* 5, ���������������зǳ���Ҫ�Ķ��������ǵ���ôһ�㲻��˵�����ܾ�ȫ�����ˡ��۹���. ������Ԩ��Ҫ������֮���ټ�һ�����룬
��Ȼ�򵥵�Ҳ��ȫ������Ԩ��ԭ��һ��BBS�ϵ�����Ϊzvbo9441987,Ϊ�˷�����䣬��ͨ��һ���㷨���������任��YUANzhi1987��
����������������ֺͳ�����ݣ���ô���������ˣ����ҿ�����Ŀ�ŵ��ط������۵ĵط�����������֪�����������롣������ô�任�ģ�
��Ҷ�֪���ֻ��ϵ���ĸ�� 1�C1�� abc�C2, def�C3, ghi�C4, jkl�C5, mno�C6, pqrs�C7, tuv�C8 wxyz�C9, 0�C0,����ô�򵥣�
Ԩ�Ӱ������г��ֵ�Сд��ĸ����ɶ�Ӧ�����֣����ֺ������ķ��Ŷ������任��������������û�пո񣬶������г��ֵĴ�д��ĸ����
Сд֮��������һλ���磺X���ȱ��Сд����������һλ��������y����򵥰ɡ���ס��z��������aŶ*/
void decrypt(char * str)
{
	int i=0;
	char temp[27]={"22233344455566677778889999"};
	for(i=0;str[i]!='\0';i++)
	{
		if(isupper(str[i]))
		{
			str[i]=str[i]=='Z'?'a':str[i]+32+1;
		}
		else if(islower(str[i]))
		{
			str[i]=temp[str[i]-97];
		}
	}
}


//6,��һ���ַ����е������ַ�ȥ�������������
void strnum(char * str)
{
	int m=0;
	int i=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(isdigit(str[i]))
		{
			str[m++]=str[i];
		}
	}
	str[m]='\0';
}


//7.���ӵ�һ��ժ�����ɸ����ӣ���������һ�뻹����񫣬�ֶ����һ����
//�ڶ��������н�ʣ�µ����ӳԵ�һ�㣬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ����
//����m�������ٳ�ʱ��ֻʣ��һ�����ӡ����һ�칲ժ�˶��٣�
int eatPeach(int m)
{
	int sum=1;
	if(m==1)
	{
		return 1;
	}
	return 2*eatPeach(m-1)+1;
}


/*8.��̲����һ�����ӣ�mֻ�������֡���һֻ���Ӱ������ƽ����Ϊm�ݣ�����һ�����Ѷ��һ���ӵ����������һ�ݡ�
�ڶ�ֻ���Ӱ�ʣ�µ�������ƽ����Ϊm�ݣ�����һ�������뺣�������һ�ݡ����������ġ�����mֻ���ֶ�����������
���ʺ�̲��ԭ�������ж��ٸ����ӣ�
���룺���Ӹ���m(3<=m<=9)  ���:ԭ�������ж��ٸ�����*/


//9��1������1--50�����֣������С����������ĺ� �������Զ��Ÿ���
int sum(char * str)
{
	char *p=str;
	int arr[100]={0};
	int m=0;
	int min=INT_MAX;
	int max=INT_MIN;
	int sum=0;
	while(p=strtok(p,","))
	{
		sscanf(p,"%d",&arr[m]);
		min>arr[m]?min=arr[m]:0;
		max<arr[m]?max=arr[m]:0;
		m++;
		p=NULL;
	}
	return sum=min+max;

}


/* 10.�ڸ����ַ����в��������ض��Ӵ���ɾ�������û���ҵ���Ӧ�Ӵ��������κβ�����

	I�� �Ӵ�ƥ��ֻ��������ƥ���������ֻ��Ҫ�����ҽ����ִ�ƥ�����������磺

	���ַ���"abababab"�У���������ƥ���Ӵ�"aba",����ƥ��2��"aba"�ִ������

	ƥ���������λ��2��ʼ��"aba"����������ƥ�䣬��ֻ��ƥ���1��"aba"�ִ���

	II�� �����ַ������ᳬ��100 Bytes���벻�ÿ��ǳ����ַ����������
	
	ʾ��

	���룺str = "abcde123abcd123"

	sub_str = "123"
	�����result_str = "abcdeabcd"

	���أ�2

	���룺str = "abcde123abcd123"

	sub_str = "1234"

	�����result_str = "abcde123abcd123"

	���أ�0*/

/*�˷����޷�����Ӵ����Ӵ�
void stringdel(char*str1,char*str2)
{
	char*p=str1;
	int i=0;
	char str3[100]={0};
	while(p=strtok(p,str2))
	{
		strcat(str3,p);
		p=NULL;
	}
	for(i=0;str3[i]!='\0';i++)
	{
		str1[i]=str3[i];
	}
	str1[i]='\0';
}
*/
int deletSubstr(char *str,char*son,char*out)
{
	int cnt=0;
	char*p=str;
	char*q=str;
	while(p=strstr(p,son))
	{
		strncpy(out+strlen(out),q,p-q);
		q=p+strlen(son);
		p=q;
		cnt++;
	}
	
	return cnt;

}

/* 12.����һ���ַ��������ַ����ڵ���ĸת���ɸ���ĸ����һ����ĸ��a����b��z����a��Z����A����aBfת����bCg��
�ַ����ڵ������ַ����ı䣬������������д���� void  Stringchang��const  char*inpu,char*output�� 
����input�������ַ�����output������ַ��� */
void  Stringchang(const  char*input,char*output)
{
	int i=0;
	for(i=0;input[i]!='\0';i++)
	{
		if(isalpha(input[i]))
		{
			if(input[i]==90||input[i]==122)
			{
				output[i]=input[i]-25;
			}
			else
			{
				output[i]=input[i]+1;
			}
		}
		else
		{
			output[i]=input[i];
		}
	}
}


/* 13.��һ��������������û����ͬ�Ĳ��֣�����12386123���������������ͬ�Ĳ�����123��
��ͬ�Ĳ�������Ӧ����2λ�����������ͬ���ַ���1�����û���򷵻�0���������Ƚ���������ת���������У����жϡ�
  ����Ϊ  int same��int num�� ����num���������������*/



/*14.�������ַ����ĳ˻�������浽�ַ����У������ַ���һ�д�ġ�657891�����ַ������д�ġ�521����
�ֱ��ַ����е��ַ�ת�����������֣����м������ת�����ַ����ʹ洢���� ����Ϊ  
void mul��char *input1��int n��char *input2, int m��char *output�� 
 ����input1��input2�����룬n��input1�ĳ��ȣ�n2��input2�ĳ��ȡ�Output����� */



/*15��һ���ַ����ض������60�֣�
����������������m,n,�ֱ�����ַ����ĸ����ͳ��ȣ�Ҫ�����,���ַ����ض̳�n��,������0,���˻��м������
������:
������: 2,8  1234567812345678123 asd  ���  12345678 12345678 12300000 asd00000



/*16�������ַ������˺�����60�֣�
ͨ����������һ��Сд��ĸ(a~z)��ɵ��ַ��������дһ���ַ������˳������ַ����г��ֶ����ͬ���ַ���
�����״γ��ֵ��ַ����˵���Ȼ����ĸ��˳������������ַ���"abfcacde"������Ϊ"abcdef"*/



/*17��Ҫ������һ���ַ������ַ�������ĸ�����ֵ���ϣ�(����ĸ����ֱ��ɾ��)ʵ�����һ���µ�
�ַ�����Ҫ����ĸ��ǰ�棬�����ں��棬��ĸ�����ֱַ𰴴�С��������					
������			
	���룺a-0%A2&c3~Z4e5z9~		
	���������AZacez023456*/
void stringsort(char*str1,char* str2)
{
	int i=0;
	int j=0;
	int m=0;
	int n=0;
	char temp=0;
	int min=0;
	char strnum[100]={0};
	char stralp[100]={0};
	for(i=0;str1[i]!='\0';i++)
	{
		if(isalpha(str1[i]))
		{
			stralp[m++]=str1[i];
		}
		else if(isdigit(str1[i]))
		{
			strnum[n++]=str1[i];
		}
	}
	for(i=0;i<m-1;i++)
	{
		min=i;
		for(j=i+1;j<m;j++)
		{
			if(stralp[j]<stralp[min])
			{
				min=j;
			}
		}
		temp=stralp[min];
		stralp[min]=stralp[i];
		stralp[i]=temp;
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(strnum[j]<strnum[min])
			{
				min=j;
			}
		}
		temp=strnum[min];
		strnum[min]=strnum[i];
		strnum[i]=temp;
	}

	strcpy(str2,stralp);
	strcat(str2,strnum);
}
	
/*20.����һ���ַ���ֻ����"0-10"��"��"�ҳ�������С�����ֺ��������֣����ܲ�ֹһ������������ʣ�����ָ�����
������ "3,3,4,5,6,7,7"*/




/*21,����һ�������170��190֮�䣨5����ߣ����Ƚ���߲ѡ����߲���С��������ߣ�����߲���ͬ��
ѡƽ����߸ߵ���������ߣ���С��������������� 170 181 173 186 190��� 170 173*/

/* 22 ����������������ͬ����������ͬ���ҳ���������*/


