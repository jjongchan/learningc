#include <stdio.h>

void Output(double);
int input();
int main()
{
	double Cel;
	int Fah;
	Fah = input() -32;
	//printf("%d", Fah); //code out
	Cel = ((double)5 / (double)9)*(double)Fah;
	Output(Cel);
	return 0;
}
int input()
{
	int fah;
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf_s("%d", &fah);
	return fah;
}
void Output(double result)
{
	printf("���� �µ��� %.1lf�� �Դϴ�.\n", result);
}