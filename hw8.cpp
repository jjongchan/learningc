#include<stdio.h>
int main()
{
	int history, literature, talent, sum;
	double average;
	printf("역사, 문학, 예능 점수를 입력하세요:");
	scanf_s("%d %d %d",&history, &literature, &talent);
	sum = history + literature + talent;
	average = (double)sum / 3;
	printf("총점은  %d 이고 평균은 %.2lf 입니다.\n", sum,average);
	return 0;
}