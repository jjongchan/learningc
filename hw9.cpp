#include<stdio.h>
int input();
int main()
{
	int number;
	number = input();
	printf("입력된 값은 8진수로 %#o 입니다.\n", number);
	printf("입력된 값은 16진수로 %#0x 입니다.\n", number);
	return 0;
}
int input()
{
	int n;
	printf("정수값을 입력하세요 : ");
	scanf_s("%d", &n);
	return n;
}