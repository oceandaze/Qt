#include<stdio.h>
int main()
{
    int number;                    
   
	printf("请输入商品7天销量：");
    scanf("%d",&number);                        
    if(number>=1000)                                       
    {                                         
           printf("本商品7天销量为A!!!\n");              
    }
    else                                            
    {
        if(number>=500)                           
            printf("本商品7天销量为B!!!\n");           
        else
		  if(number>=300)
            printf("本商品7天销量为C!!!\n");           
          else                                           
            printf("本商品7天销量为D!!!\n");              
     }
     return 0;
}
