#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	/*int a, b,c;
	printf("输入新的a与b\n");
	scanf("%d%d", &a, &b);
	printf("旧的a=%d b=%d\n", a, b);
	c = b;
	b = a;
	a = c;
	printf("新的a=%d b=%d\n", a, b);
	return 0;*/
	int a = 5, b = 6,c;
	c = a;
	printf("c=%d\n", c);
	printf("%d\n",a && b);
	return 0;
}