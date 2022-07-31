#include<stdio.h>



//1、宏是什么期间处理
/*
编译预处理阶段，读取c源程序，对其中的伪指令（以#开头的指令）和特殊符号进行处理。
或者说是扫描源代码，对其进行初步的转换，产生新的源代码提供给编译器。
预处理过程先于编译器对源代码进行处理。
*/
/*  指令         用途
    #           空指令，无任何效果
    #include    包含一个源代码文件
    #define     定义宏
    #undef      取消已定义的宏
    #if         如果给定条件为真，则编译下面代码
    #ifdef      如果宏已经定义，则编译下面代码
    #ifndef     如果宏没有定义，则编译下面代码
    #elif       如果前面的#if给定条件不为真，当前条件为真，则编译下面代码，其实就是else if的简写
    #endif      结束一个#if……#else条件编译块
    #error      停止编译并显示错误信息
*/

//2、#define 中#和##？
//#运算符
//出现在宏定义中的#运算符把跟在其后的参数转换成一个字符串。
//有时把这种用法的#称为字符串化运算符

//##运算符（很少用）
//##运算符用于把参数连接到一起。
//预处理程序把出现在##两侧的参数合并成一个符号。看下面的例子：
#define PASTE(n) "adhfkj"#n
#define NUM(a,b,c) a##b##c
#define STR(a,b,c) a##b##c

//3、#define与const区别？
//使用#define预处理器：#define 变量名 变量值
//使用关键字const：const 数据类型 变量名 变量值
/*
1、const定义常量时，需要带数据类型，而define不用带
2、const是在编译、运行的时候起作用，而define是在编译的预处理阶段起作用
3、define只是简单的替换，没有类型检查。简单的字符串替换会导致边界效应，
4、const常量可以进行调试，define不能进行调试，
5、const不能重新定义，不可以定义两个一样的，而define通过undef取消某个符号的定义，再重新定义,
6、define可以配合#ifdef、#ifndef、#endif来使用，可以让代码更加灵活
*/

//4、实验条件编译功能
#define DEBUG       //此时#ifdef DEBUG为真
//#define DEBUG 0  //此时为假
#undef DEBUG

//带参宏与函数的区别
/*
本质区别：宏展开仅仅是字符串的替换，不会对表达式进行计算，宏在编译之前就被处理掉了，
他没有机会参与编译，也不会占用内存。而函数是一段可以重复使用的代码，会被编译，
会给他分配内存，每次调用函数就是执行这块内存中的代码。
*/
int main()
{
#ifdef DEBUG
	printf("%d\n",NUM(1,2,3));
#else
    printf("%s\n",STR("aa","bb","cc"));
#endif
	printf("%s\n",PASTE(33));
	return 0;
}