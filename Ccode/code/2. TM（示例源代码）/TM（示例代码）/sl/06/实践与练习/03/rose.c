/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   输出玫瑰花语
*/
#include<stdio.h>
int main()
{
	int rose;
	printf("输入1：代表选择红玫瑰\n");
	printf("输入2：代表选择白玫瑰\n");
	printf("输入3：代表选择粉玫瑰\n");
	printf("输入4：代表选择蓝玫瑰\n");
	printf("请输入您的选择：\n");
	scanf("%d",&rose);
	if(rose==1)
	{
		printf("----------------------------------------------------\n");
		printf("|        您选择的是红玫瑰                           |\n");
		printf("|   它代表我爱你、热恋，希望与你泛起激情的爱        |\n");
		printf("----------------------------------------------------\n");
	}
	else if (rose == 2)
	{
		printf("★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★\n");
		printf("★           您选择的是白玫瑰                      ★\n");
		printf("★  它代表纯洁、谦卑。尊敬，我们的爱情是纯洁的爱   ★\n");
		printf("★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★ ★\n ");
	}
	else if (rose == 3)
	{
		printf("▽ ▽ ▽ ▽ ▽ ▽ ▽ ▽ ▽ ▽ ▽ ▽ ▽ ▽ ▽ ▽\n");
		printf("           您选择的是粉玫瑰                  \n");
		printf("  它代表初恋，喜欢你那灿烂的笑容，年轻漂亮  \n");
		printf("△ △ △ △ △ △ △ △ △ △ △ △ △ △ △ △ \n");
	}
	else if (rose == 4)
	{
		printf("≈ ≈ ≈ ≈ ≈ ≈ ≈\n");
		printf(" 您选择的是蓝玫瑰\n");
		printf(" 它代表憨厚、善良\n");
		printf("≈ ≈ ≈ ≈ ≈ ≈ ≈\n");
	}
	else
	{
		printf("& & & & & & & & & & & & & & &\n");
		printf("& 对不起，没有您选择玫瑰花  &\n");
		printf("& & & & & & & & & & & & & & &\n");
	}

	return 0;
}