#include<stdio.h>
int main()
{
    int number;                    
   
	printf("��������Ʒ7��������");
    scanf("%d",&number);                        
    if(number>=1000)                                       
    {                                         
           printf("����Ʒ7������ΪA!!!\n");              
    }
    else                                            
    {
        if(number>=500)                           
            printf("����Ʒ7������ΪB!!!\n");           
        else
		  if(number>=300)
            printf("����Ʒ7������ΪC!!!\n");           
          else                                           
            printf("����Ʒ7������ΪD!!!\n");              
     }
     return 0;
}
