/**
   开发团队：明日科技
   明日学院网站：www.mingrisoft.com
   一起来测试情商
*/
#include <stdio.h>
void Q1();
void Q2();
void Q3();
void Q4();
void Q5();
void Q6();
void Q7();
void Q8();
void Q9();
void Q10();
void gameOver();
void Out();
void again(int i, int As, int Bs, int Cs, int Ds);
static  int q1, q2, q3, q4, q5, q6, q7, q8, q9, q10;
int main()
{

	Out();
	return 0;
}

void Out() {
	printf("=============情商测试（共10题总分200分）=================\n");
	printf("人的情商比智商重要得多，它反映了一个人认知与表达自身情感；共10题。\n");
	printf("了解、体会他人情感的能力。本测试由美国著名心理学家、哈佛心理学博士Daniel Goleman（1946.3.7 - ）所设计，\n");
	printf("通过对这一系列问题的回答，您可以获得一个关于自己EQ（情商）的简单印象分数。最高分为200，一般人平均分为100左右。\n");
	Q1();
}


void Q1()
{
	char sq;
	printf("------------第一题------------------\n");
	printf("1. 坐飞机时，突然受到很大的震动，你开始随着机身左右摇摆。这时候，您会怎样做呢?\n");
	printf("   A. 继续读书或看杂志，或继续看电影，不太注意正在发生的骚乱\n");
	printf("   B. 注意事态的变化，仔细听播音员的播音，并翻看紧急情况应付手，以备万一\n");
	printf("   C. A和B都有一点\n");
	printf("   D. 不能确定--根本没注意到\n");

	printf("请输入你的答案(单选)：\n");
	scanf("%c", &sq);
	if (sq == 'A') {
		q1 = 20;
	}
	else if (sq == 'B') {
		q1 = 20;
	}
	else if (sq == 'C') {
		q1 = 20;
	}
	else if (sq == 'D') {
		q1 = 0;
	}
	else {
		again(1, 20, 20, 20, 0);
		return 0;
	}
	Q2();
}
//	　　2. B是最好的选择
//	　　情商高的父母善于利用孩子情绪状态不好的时机对孩子进行情绪教育，帮助孩子明白是什么使他们感到不安，他们正在感受的情绪状态是怎样的，以及他们能进行的选择
//	　　A=0，B=20，C=0，D=0
void Q2()
{
	char sq;
	printf("------------第二题------------------\n");
	printf("2. 带一群4岁的孩子去公园玩，其中一个孩子由于别人都不和他玩而大哭起来。这个时候，您该怎么办呢?\n");
	printf("   A. 置身事外--让孩子们自己处理\n");
	printf("   B. 和这个孩子交谈，并帮助她想办法\n");
	printf("   C. 轻轻地告诉她不要哭\n");
	printf("   D. 想办法转移这个孩子的注意力，给她一些其他的东西让她玩\n");
	printf("请输入你的答案(单选)：\n");
	scanf("%c", &sq);
	if (sq == 'A') {
		q2 = 0;
	}
	else if (sq == 'B') {
		q2 = 20;
	}
	else if (sq == 'C') {
		q2 = 0;
	}
	else if (sq == 'D') {
		q2 = 0;
	}
	else {
		again(2, 0, 20, 0, 0);
		return 0;
	}
	Q3();
}
//	　　3. A自我激励的一个标志是能制定一个克服障碍和挫折的计划，并严格执行它
//	　　A=20，B=0，C=20，D=0
void Q3() {

	char sq;
	printf("------------第三题------------------\n");
	printf("3. 假设您是一个大学生，想在某门课程上得优秀，但是在其中考试时却只得了及格。这时候，您该怎么办呢?\n");
	printf("   A. 制定一个详细的学习，并决心按计划进行\n");
	printf("   B. 决心以后好好学\n");
	printf("   C. 告诉自己在这门课上考不好没什么大不了的，把精力集中在其他可能考得好的课程上\n");
	printf("   D. 去拜访任课教授，试图让他给您高一点的分数\n");
	printf("请输入你的答案(单选)：\n");
	scanf("%c", &sq);
	if (sq == 'A') {
		q3 = 20;
	}
	else if (sq == 'B') {
		q3 = 0;
	}
	else if (sq == 'C') {
		q3 = 20;
	}
	else if (sq == 'D') {
		q3 = 0;
	}
	else {
		again(3, 20, 0, 20, 0);
		return 0;
	}
	Q4();
}
//	　　4. C为最佳答案
//	　　情商高的一个标志是面对挫折时，能把它看成一种可以从中学到东西的挑战，坚持下去，尝试新的方法，而不是放弃努力，怨天尤人，变得萎靡不振
//	　　A=0，B=0，C=20，D=0
void Q4() {

	char sq;
	printf("------------第四题------------------\n");
	printf("4. 假设您是一个保险推销员，去访问一些有希望成为您的顾客的人。可是一连十五个人都只是对您敷衍，并不明确表态，您变得很失望。这时候，您会怎么做呢?\n");
	printf("   A. 认为这只不过是一天的遭遇而已，希望明天会有好运气\n");
	printf("   B. 考虑一下自己是否适合做推销员\n");
	printf("   C. 在下一次拜访时再做努力，保持勤勤恳恳工作的状态\n");
	printf("   D. 考虑去争取其他的顾客");
	printf("请输入你的答案(单选)：\n");
	scanf("%c", &sq);
	if (sq == 'A') {
		q4 = 0;
	}
	else if (sq == 'B') {
		q4 = 0;
	}
	else if (sq == 'C') {
		q4 = 20;
	}
	else if (sq == 'D') {
		q4 = 0;
	}
	else {
		again(4, 0, 0, 20, 0);
		return 0;
	}
	Q5();
}

//	　　5. C形成一种欢迎多样化的气氛的最有效的方法是公开挑明这一点
//	　　当有人违反时，明确告诉他您的组织的规范不容许这种情况发生。不是力图改变这种偏见(这是一个更困难的任务)，而只是让人们遵照规范去行事
//	　　A=0，B=0，C=20，D=0
void Q5() {
	char sq;
	printf("------------第五题------------------\n");
	printf("5. 您是一个经理，提倡在公司中不要搞种族歧视。一天您偶然听到有人正在开有关种族歧视的玩笑。您会怎么办呢?\n");
	printf("   A. 不理它--这只是一个玩笑而已\n");
	printf("   B. 把那人叫到办公室去，严厉斥责他一顿\n");
	printf("   C. 当场大声告诉他，这种玩笑是不恰当的，在您这里是不能容忍的\n");
	printf("   D. 建议开玩笑的人去参加一个有关反对种族歧视的培训班\n");
	printf("请输入你的答案(单选)：\n");
	scanf("%c", &sq);
	if (sq == 'A') {
		q5 = 0;
	}
	else if (sq == 'B') {
		q5 = 0;
	}
	else if (sq == 'C') {
		q5 = 20;
	}
	else if (sq == 'D') {
		q5 = 0;
	}
	else {
		again(5, 0, 0, 20, 0);
		return 0;
	}
	Q6();
}
//	　　6.D有资料表明，当一个人处于愤怒状态时，使他平静下来的最有效的办法是转移他愤怒的焦点，理解并认可他的感受，用一种不激怒他的方式让他看清现状，并给他以希望
//	　　A=0，B=5，C=5，D=20
void Q6() {
	char sq;
	printf("------------第六题------------------\n");
	printf("6. 您的朋友开车时别人的车突然危险地抢到你们前面，您的朋友勃然大怒，而您试图让他平静下来。您会怎么做呢?\n");
	printf("   A. 告诉他忘掉它吧--现在没事了，这不是什么大不了的事\n");
	printf("   B. 放一盘他喜欢听的磁带，转移他的注意力\n");
	printf("   C. 一起责骂那个司机，表示自己站在他那一边\n");
	printf("   D. 告诉他您也曾有同样的经历，当时您也一样气得发疯，可是后来您看到那个司机出了车祸，被送到医院急救室\n");
	printf("请输入你的答案(单选)：\n");
	scanf("%c", &sq);
	if (sq == 'A') {
		q6 = 0;
	}
	else if (sq == 'B') {
		q6 = 5;
	}
	else if (sq == 'C') {
		q6 = 5;
	}
	else if (sq == 'D') {
		q6 = 20;
	}
	else {
		again(6, 0, 5, 5, 20);
		return 0;
	}
	Q7();
}
//	　　7.A中断20分钟或更长的时间
//	　　这是使愤怒引起的生理状态平息下来的最短时间。否则，种状态会歪曲您的理解力，使您更可能出口伤人。平静了情绪后，你们的讨论才会更富有成效
//	　　A=20，B=0，C=0，D=0
void Q7() {
	char sq;
	printf("------------第七题------------------\n");
	printf("7. 您和伴侣发生了争论，两人激烈地争吵;盛怒之下，互相进行人身攻击，虽然你们并不是真的想这样做。这时候，最好怎么办呢?\n");
	printf("   A. 停止20分钟，然后继续争论\n");
	printf("   B. 停止争吵……保持沉默，不管对方说什么\n");
	printf("   C. 向对方说抱歉，并要求他(她)也向您道歉\n");
	printf("   D. 先停一会儿，整理一下自己的想法，然后尽可能清楚地阐明自己的立场\n");
	printf("请输入你的答案(单选)：\n");
	scanf("%c", &sq);
	if (sq == 'A') {
		q7 = 20;
	}
	else if (sq == 'B') {
		q7 = 0;
	}
	else if (sq == 'C') {
		q7 = 0;
	}
	else if (sq == 'D') {
		q7 = 0;
	}
	else {
		again(7, 20, 0, 0, 0);
		return 0;
	}
	Q8();
}
//	　　8.B当一个组织的成员之间关系融洽、亲善，每一个人都感到心情舒畅时，组织的工作效率才会最高。在这种情况下，人们才能自由地做出他们最大的贡献
//	　　A=0，B=20，C=0，D=0
void Q8() {

	char sq;
	printf("------------第八题------------------\n");
	printf("8. 您被分到一个单位当领导，想提出一些解决工作中烦难问题的好方法。这时候，您第一件要做的是什么呢?\n");
	printf("   A. 起草一个议事日程，以便充分利用和大家在一起讨论的时间。\n");
	printf("   B. 给人们一定的时间相互了解\n");
	printf("   C. 让每一个人说出如何解决问题的想法\n");
	printf("   D. 采用一种创造性地发表意见的形式，鼓励每一个人说出此时进入他脑子里的任何想法，而不管该想法有多疯狂\n");
	printf("请输入你的答案(单选)：\n");
	scanf("%c", &sq);
	if (sq == 'A') {
		q8 = 0;
	}
	else if (sq == 'B') {
		q8 = 20;
	}
	else if (sq == 'C') {
		q8 = 0;
	}
	else if (sq == 'D') {
		q8 = 0;
	}
	else {
		again(8, 0, 20, 0, 0);
		return 0;
	}
	Q9();
}
//	　　9.D生来带有害羞气质的孩子，如果他们父母能安排一系列渐进的针对他们害羞的挑战，并且这种挑战是能逐个应付得了的，那么他们通常会变得喜欢外出起来
//	　　A=0，B=5，C=0，D=20
void Q9() {
	char sq;
	printf("------------第九题------------------\n");
	printf("9. 您3岁的儿子非常胆小，实际上，从他出生起就对陌生地方和陌生人有些神经过敏或者说有些恐惧。您该怎么办呢?\n");
	printf("   A. 接受他具有害羞气质的事实，想办法让他避开他感到不安的环境\n");
	printf("   B. 带他去看儿童精神科医生，寻求帮助\n");
	printf("   C. 有目的地让他一下子接触许多人，带他到各种陌生的地方，克服他的恐惧心理\n");
	printf("   D. 设计渐进的系列挑战性计划，每一个相对来说都是容易对付的，从而让他渐渐懂得他能够应付陌生的人和陌生的地方\n");
	printf("请输入你的答案(单选)：\n");
	scanf("%c", &sq);
	if (sq == 'A') {
		q9 = 0;
	}
	else if (sq == 'B') {
		q9 = 5;
	}
	else if (sq == 'C') {
		q9 = 0;
	}
	else if (sq == 'D') {
		q9 = 20;
	}
	else {
		again(9, 0, 5, 0, 20);
		return 0;
	}
	Q10();
}
//	　　10.B给自己适度的挑战，最有可能激发自己最大的热情
//
//	　　这既能使您学得愉快，又能使您完成得最好
//
//	　　A=0，B=20，C=0，D=0
void Q10() {

	char sq;
	printf("------------第十题------------------\n");
	printf("10. 多年以来，您一起想重学一种您在儿时学过的乐器，而现在只是为了娱乐，您又开始学了。您想最有效的利用时间。您该怎么做呢?\n");
	printf("    A. 每天坚持严格的练习\n");
	printf("    B. 选择能稍微扩展能力的有针对性的曲子去练习\n");
	printf("    C. 只有当自己有情绪的时候才去练习\n");
	printf("    D. 选择远远超出您的能力但通过勤奋的努力能掌握的乐曲去练习\n");
	printf("请输入你的答案(单选)：\n");
	scanf("%c", &sq);
	if (sq == 'A') {
		q10 = 0;
	}
	else if (sq == 'B') {
		q10 = 20;
	}
	else if (sq == 'C') {
		q10 = 0;
	}
	else if (sq == 'D') {
		q10 = 0;
	}
	else {
		again(10, 0, 20, 0, 0);
		return 0;
	}
	gameOver();
}
void gameOver() {
	int z = q1 + q2 + q3 + q4 + q5 + q6 + q7 + q8 + q9 + q10;
	printf("------------答题结束------------------\n");
	printf("测试结果：获得分数共计：%d分\n", z);
	if (z >= 0 && z < 50) {
		printf("低情商\n");
		printf("尊重所有人的人权和人格尊严。\n不将自己的价值观强加于他人。\n对自己有清醒的认识，能承受压力。\n自信而不自满。\n人际关系良好，和朋友或同事能友好相处。\n善于处理生活中遇到的各方面的问题。\n 认真对待每一件事情。\n");
	}
	else if (z >= 50 && z < 100) {
		printf("较低情商\n");
		printf("是负责任的“好”公民。\n自尊。\n有独立人格，但在一些情况下易受别人焦虑情绪的感染。\n比较自信而不自满。\n较好的人际关系。\n能应对大多数的问题，不会有太大的心理压力。\n");
	}
	else if (z >= 100 && z < 150) {
		printf("较高情商\n");
		printf("易受他人影响，自己的目标不明确。\n比低情商者善于原谅，能控制大脑。\n能应付较轻的焦虑情绪。\n把自尊建立在他人认同的基础上。\n缺乏坚定的自我意识。\n 人际关系较差。\n");
	}
	else if (z >= 150 && z < 200) {
		printf("高情商\n");
		printf("自我意识差。\n无确定的目标，也不打算付诸实践。\n严重依赖他人。\n处理人际关系能力差。\n 应对焦虑能力差。\n 生活无序。\n无责任感，爱抱怨。\n");
	}
}
void again(int i, int As, int Bs, int Cs, int Ds) {
	char sq;
	int y = 0;
	//printf("输入错误，请再次输入你的答案(单选)：\n");
	scanf("%c", &sq);
	if (sq == 'A') {
		y = As;
	}
	else if (sq == 'B') {
		y = Bs;
	}
	else if (sq == 'C') {
		y = Cs;
	}
	else if (sq == 'D') {
		y = Ds;
	}
	else {
		again(i, As, Bs, Cs, Ds);

	}
	if (i == 1) {
		q1 = y;
		Q2();
	}
	else if (i == 2) {
		q2 = y;
		Q3();
	}
	else if (i == 3) {
		q3 = y;
		Q4();
	}
	else if (i == 4) {
		q4 = y;
		Q5();
	}
	else if (i == 5) {
		q5 = y;
		Q6();
	}
	else if (i == 6) {
		q6 = y;
		Q7();
	}
	else if (i == 7) {
		q7 = y;
		Q8();
	}
	else if (i == 8) {
		q8 = y;
		Q9();
	}
	else if (i == 9) {
		q9 = y;
		Q10();
	}
	else if (i == 10) {
		q10 = y;
		gameOver();
	}

}



