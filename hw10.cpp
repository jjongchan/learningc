#include<stdio.h>
int main()
{
	int a, b;
	int sum, substraction, multiplication;
	double division;
	printf("�ΰ��� ������ �Է��Ͻÿ� :");
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	substraction = a - b;
	multiplication = a * b;
	division = (double)a / (double)b;
	printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.2lf\n", a, b, sum, a, b, substraction, a, b, multiplication, a, b, division);

	return 0;
}