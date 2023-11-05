#include <stdio.h>
#include <stdlib.h>
int  main(void)
{
	char a = 'a';
	char b = 'b';
	//printf("%d,%d\n",a, b) ;
	printf("%hhd,%hhd\n", a, b);
	printf("请输入新的a b\n");
	//scanf_s(" %c%c" ,& a,1 &b,1);
	a = getchar();
	rewind(stdin);
	b = getchar();
	printf("%hhd,%hhd\n", a, b);
	//printf("新的a=%hhd,新的b=%hhd",a,b);
	//putchar(a, b);


	system("pause>0");
	return 0;
}

// 换行\n,打在引号里






//																								基本数据类型
//	整型数据类型

//（输入 前缀 后加数值-输入）
// 整形常量
//数字前缀表示进制						无---10进制
//													 0---8进制
//													 0x---16进制
//													 0b---二进制

//输出:（在变量前写格式）格式说明符
//16进制 %x %X
//10进制 %d
//8进制 %o
//无二进制
// e.g.				printf("%x",b);
//								("%d,%o",c,d);



//	整形常量
// 类型名								后缀
// （signed（可省略）与unsigned对应）
//short
// unsigned short					无后缀（整数常量后表示整形类型）
// int	
//unsigned int						u/U
//long									l/L
//unsigned long					ul
//long long							ll
//unsigned long long			ull
// 

//整形变量输入：scanf_s 函数
//scanf_s("%d",&a);  两数据：scanf_s("%d%d",&a,&b);
//输入两数据间使用{空格} {回车} {tab}或（”%d,%d“）
//scanf_s("%d,%d", &a, &b);-----这种格式在控制台输入数字之间只能用逗号（英文逗号）

//计算变量大小：sizeof（运算符）
//sizeof（类型名/变量名）能算出（）内东西所占字节数


//浮点型
//科学计数法-----e\E
//省略：+     0.54=.54     5.0=5,
/*类型名			字节数	后缀							格式说明符								科学计数法						精度（有效数字位）
	float				4			f\F								%f																				大于等于6
	double			8			无（默认类型）				%lf																			大于等于10
	long double	8-16			l\L									%Lf										e%								大于等于10
*/
//控制输出的小数点后位数（vs默认最多输出6位）：%.1f--一位小数 %.3lf---三位小数（四舍五入）
//输出.多了后面会补0

//浮点型输入
//float a=0.0f;
//double b=0;
//long double c=0.0l

//浮点型传化成整形
//1. int 小数---输出后直接舍弃小数部分   e.g. int a=34.56---a=34
//2.int b=(int)56.67-----b=56


//字符型
//char
// 字符常量：'w'--' '--'a'---'4(均在ASCII码表上)
//每个字符对应唯一值（含义）
//ASCII码表（国际通用）
//类型名					字节数		格式说明符								范围
//char							1			%c（字符）/%hhd（数字）		-128-127
//unsigned char			1			%c（字符）/%hhu（数字）			0-255
//字符0--‘0’与数字0--0不同

//putchar--专门输出字符型的字符
// 字符=getchar---专门输入字符型的字符
//scanf输入字符时需要在变量后加,1				e.g.scanf("%c",&a,1);
//PS:输入多个字符时不用打空格（空格本身就是字符）
//避免方法：清除缓冲区（你存放字符的地方）rewind(stdin);			下方是例子
/*int  main(void)
{
	char a = 'a';
	char b = 'b';
	//printf("%d,%d\n",a, b) ;
	printf("%hhd,%hhd\n", a, b);
	printf("请输入新的a b\n");
	//scanf_s(" %c%c" ,& a,1 &b,1);
	a = getchar();
	rewind(stdin);
	b = getchar();
	printf("%hhd,%hhd\n", a, b);
	//printf("新的a=%hhd,新的b=%hhd",a,b);
	//putchar(a, b);


	system("pause>0");
	return 0;
	*/



//运算符
//加减乘除
/*+
   -
   *(不能省略)
   /（整数运算只得整数e.g.5/2得2余1
		小数运算正常e.g.5.0/2.0得2.5
		小数与整数运算得小数5/2.0得2.5）
*/

//%取余（只能整数）
//5%2得2余1

//-负号
//-【空格】-a