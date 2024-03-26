#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double r, h,cir,pillar;
	printf("请输入圆柱的地面半径与高\n");
	scanf("%lf%lf",&r,&h);
	cir = r * r * 3.14;
	pillar = r * h;
	printf("圆柱表面积=%.2f", cir * 2 + pillar);
	return 0;
}