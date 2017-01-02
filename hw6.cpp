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
	printf("화씨 온도를 입력하세요 : ");
	scanf_s("%d", &fah);
	return fah;
}
void Output(double result)
{
	printf("섭씨 온도는 %.1lf도 입니다.\n", result);
}