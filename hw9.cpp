#include<stdio.h>
int input();
int main()
{
	int number;
	number = input();
	printf("�Էµ� ���� 8������ %#o �Դϴ�.\n", number);
	printf("�Էµ� ���� 16������ %#0x �Դϴ�.\n", number);
	return 0;
}
int input()
{
	int n;
	printf("�������� �Է��ϼ��� : ");
	scanf_s("%d", &n);
	return n;
}