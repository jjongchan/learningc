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
	printf("���� ��뷮�� �Է��ϼ���(kw) : ");
	scanf_s("%d", &a);
	return a;
}
void Output(double result)
{
	printf("���� ������� %lf �� �Դϴ�.\n", result);
}