#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double r, h,cir,pillar;
	printf("������Բ���ĵ���뾶���\n");
	scanf("%lf%lf",&r,&h);
	cir = r * r * 3.14;
	pillar = r * h;
	printf("Բ�������=%.2f", cir * 2 + pillar);
	return 0;
}