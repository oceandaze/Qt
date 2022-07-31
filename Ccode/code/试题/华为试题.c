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
	/*2、
	char str[100]={0};
	gets(str);
	outstr(str);
	puts(str);
	*/
	//4、
	/*
	char str[100]={0};
	int arr[100]={0};
	int n=0; 
	int i=0;
	char str2[100]={0};
	//scanf(“%[^\n]”,str);//scanf输入带空格字符串
	gets(str);
	n=split(str,arr);
	sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	//strsort(str);
	*/
//5、密码解密
	/*
	char str[100]={0};
	scanf("%s",str);
	decrypt(str);
	printf(str);
	*/
	//6、
	
	//strnum(str);
	//puts(str);
	//printf("%d",sum(str));
	//7、
	int n=0;
	n=eatPeach(10);
	printf("%d",n);
	//10、
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
	//12、
	//Stringchang(str,str2);
	//puts(str2);
	//17、

	//stringsort(str,str2);
	//puts(str);
	return 0;
}
/*1,功能: 将给定的报文按规则转换成另一个报文后输出。 转换规则如下： 报文中如果出现0x7E，
转义成为2个字节0x7D 0x5E，如果出现0x7D，转义成为2个字节0x7D 0x5D。最后在报文头尾各加上一个0x7E定界。
 示例（每个字节以十六进制数表示） 给定原始报文：*/



 //2,输入一个字符串，将其中大写字母转换为对应小写字母之后的第五个字母，若原始大写字母为V～Z,
 //则转换为对应小写字母的值减21。其他字符不变，输出转换

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


//3, 时间相加函数(例如输入08:12:30和05:24:21,输出13:36:51)



 /*4, 给定字符串内有很多正整数，要求对这些正整数进行排序，然后返回排序后指定位置的正整数
	排序要求：按照每个正整数的后三位数字组成的整数进行从小到大排序
	1）如果不足三位，则按照实际位数组成的整数进行比较
	2）如果相等，则按照输入字符串中的原始顺序排序
	说明（以下内容考生无须检查，调用者保证）：
	1) 字符串以’\0’结尾，仅包含数字、空格
	2) 字符串内正整数之间以单个空格分隔，字符串首尾没有空格
	3) 正整数格式为十进制，大小：1~1000000，正整数的数字非零开始
	示例:
	如字符串内容?
	1223 22 3232 2016
	按照规定排序后
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

//老师代码
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



/* 5, 密码是我们生活中非常重要的东东，我们的那么一点不能说的秘密就全靠它了。哇哈哈. 接下来渊子要在密码之上再加一套密码，
虽然简单但也安全。假设渊子原来一个BBS上的密码为zvbo9441987,为了方便记忆，他通过一种算法把这个密码变换成YUANzhi1987，
这个密码是他的名字和出生年份，怎么忘都忘不了，而且可以明目张胆地放在显眼的地方而不被别人知道真正的密码。他是这么变换的，
大家都知道手机上的字母： 1–1， abc–2, def–3, ghi–4, jkl–5, mno–6, pqrs–7, tuv–8 wxyz–9, 0–0,就这么简单，
渊子把密码中出现的小写字母都变成对应的数字，数字和其他的符号都不做变换，声明：密码中没有空格，而密码中出现的大写字母则变成
小写之后往后移一位，如：X，先变成小写，再往后移一位，不就是y了嘛，简单吧。记住，z往后移是a哦*/
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


//6,把一个字符串中的其它字符去掉，把数字输出
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


//7.猴子第一天摘下若干个桃子，当即吃了一半还不过瘾，又多吃了一个。
//第二天早上有奖剩下的桃子吃掉一般，又多吃了一个。以后每天早上都吃了前一天剩下的一般零一个。
//到第m天早上再吃时，只剩下一个桃子。求第一天共摘了多少？
int eatPeach(int m)
{
	int sum=1;
	if(m==1)
	{
		return 1;
	}
	return 2*eatPeach(m-1)+1;
}


/*8.海滩上有一堆桃子，m只猴子来分。第一只猴子把这堆桃平均分为m份，多了一个，把多的一个扔到海里，拿走了一份。
第二只猴子把剩下的桃子又平均分为m份，多了一个，丢入海里，拿走了一份……第三第四……第m只猴字都这样操作，
请问海滩上原来最少有多少个桃子？
输入：猴子个数m(3<=m<=9)  输出:原来最少有多少个桃子*/


//9，1：输入1--50个数字，求出最小数和最大数的和 ，输入以逗号隔开
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


/* 10.在给定字符串中查找所有特定子串并删除，如果没有找到相应子串，则不作任何操作。

	I、 子串匹配只考虑最左匹配情况，即只需要从左到右进行字串匹配的情况。比如：

	在字符串"abababab"中，采用最左匹配子串"aba",可以匹配2个"aba"字串。如果

	匹配出从左到右位置2开始的"aba"，则不是最左匹配，且只能匹配出1个"aba"字串。

	II、 输入字符串不会超过100 Bytes，请不用考虑超长字符串的情况。
	
	示例

	输入：str = "abcde123abcd123"

	sub_str = "123"
	输出：result_str = "abcdeabcd"

	返回：2

	输入：str = "abcde123abcd123"

	sub_str = "1234"

	输出：result_str = "abcde123abcd123"

	返回：0*/

/*此方法无法规避子串的子串
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

/* 12.给定一个字符串，把字符串内的字母转换成该字母的下一个字母，a换成b，z换成a，Z换成A，如aBf转换成bCg，
字符串内的其他字符不改变，给定函数，编写函数 void  Stringchang（const  char*inpu,char*output） 
其中input是输入字符串，output是输出字符串 */
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


/* 13.求一个整型数字中有没有相同的部分，例如12386123这个整型数字中相同的部分是123，
相同的部分至少应该是2位数，如果有相同部分返回1，如果没有则返回0。方法是先将整型数字转换到数组中，再判断。
  函数为  int same（int num） 其中num是输入的整型数字*/



/*14.求两个字符串的乘积，结果存到字符串中，例如字符串一中存的“657891”，字符串二中存的“521”，
分别将字符串中的字符转换成整型数字，进行计算后，再转换成字符类型存储起来 函数为  
void mul（char *input1，int n，char *input2, int m，char *output） 
 其中input1和input2是输入，n是input1的长度，n2是input2的长度。Output是输出 */



/*15，一、字符串截断输出（60分）
首先输入两个整数m,n,分别代表字符串的个数和长度，要求输出,将字符串截短成n长,不够补0,多了换行继续输出
如输入:
如输入: 2,8  1234567812345678123 asd  输出  12345678 12345678 12300000 asd00000



/*16，二、字符串过滤后排序（60分）
通过键盘输入一串小写字母(a~z)组成的字符串。请编写一个字符串过滤程序，若字符串中出现多个相同的字符，
将非首次出现的字符过滤掉，然后按字母表顺序输出。比如字符串"abfcacde"输出结果为"abcdef"*/



/*17，要求：输入一个字符串，字符串是字母和数字的组合，(非字母数字直接删除)实现输出一个新的
字符串，要求字母在前面，数字在后面，字母和数字分别按从小到大排列					
用例：			
	输入：a-0%A2&c3~Z4e5z9~		
	期望结果：AZacez023456*/
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
	
/*20.输入一串字符，只包含"0-10"和"，"找出其中最小的数字和最大的数字（可能不止一个），输出最后剩余数字个数。
如输入 "3,3,4,5,6,7,7"*/




/*21,输入一组身高在170到190之间（5个身高），比较身高差，选出身高差最小的两个身高；若身高差相同，
选平均身高高的那两个身高；从小到大输出；如输入 170 181 173 186 190输出 170 173*/

/* 22 数组中数字两两相同，有两个不同，找出这两个：*/


