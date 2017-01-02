#include <stdio.h>

void Output(double);
int input();
int main()
{
	int kw, stdrate;
	double finalrate, userate, tax, totalrate;
	kw = input ();
	stdrate = 660;
	userate = 88.5;
	totalrate = stdrate + (userate * kw);
	tax = totalrate * 0.09;
	finalrate = totalrate + tax;
	Output(finalrate);
	return 0;
}
int input()
{
	int a;
	printf("전기 사용량을 입력하세요(kw) : ");
	scanf_s("%d", &a);
	return a;
}
void Output(double result)
{
	printf("전기 사용요금은 %lf 원 입니다.\n", result);
}