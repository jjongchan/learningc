#include<stdio.h>
int main()
{
	int history, literature, talent, sum;
	double average;
	printf("����, ����, ���� ������ �Է��ϼ���:");
	scanf_s("%d %d %d",&history, &literature, &talent);
	sum = history + literature + talent;
	average = (double)sum / 3;
	printf("������  %d �̰� ����� %.2lf �Դϴ�.\n", sum,average);
	return 0;
}