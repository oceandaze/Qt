#include<stdio.h>
int main()
{
	    int i;
	    char DailyUse[50] = { "纸抽,纸巾,收纳箱,水杯,垃圾袋,剪刀,挂钩,拖鞋,小闹钟" };
	    char MakeUp[200]  = { "保湿套装,气垫cc,隔离霜,防晒霜,眉粉,眼影色盘,睫毛膏" };
	    char Sports[50]   = { "运动服,球鞋,护腕,护膝,护掌,排球,瑜伽垫,瑜伽球" };
	    char Health[100]  = { "蛋白粉,口服液,眼部按摩仪,血压计,脚底按摩器" };
	    printf("淘宝购物车清单:\n\n");
      printf("====生活用品类:====\n");
	    for (i = 0; i < 50; i++)
	    {
		    printf("%c", DailyUse[i]);
	    }
	    printf("\n\n");
	    printf("====化妆品类:====\n");
	    for (i = 0; i < 200; i++)
	    {
		    printf("%c", MakeUp[i]);
	    }
	    printf("\n\n");
	    printf("====运动类商品:====\n");
	    for (i = 0; i < 50; i++)
	    {
		    printf("%c", Sports[i]);
	     }
	    printf("\n\n");
	    printf("====保健类商品:====\n");
	    for (i = 0; i < 100; i++)
	    {
		    printf("%c", Health[i]);
	    }
	    printf("\n\n");
	    return 0;
}
