#include <stdio.h>
int main()
{
	double km, kmh, sec;
	int hour, min;

	printf("\* 거리를 입력하시오(km단위) : ");
	scanf_s("%lf", &km);
	printf("\* 시속을 입력하시오(km\/h단위) : ");
	scanf_s("%lf", &kmh);
	sec = (km / kmh);
	hour = (km / kmh);
	sec = sec - hour;
	min = sec * 60;
	sec = sec * 60;
	sec = (sec - min)*60;

	printf("%.2lf km \=\> %d시간 %d분 %.3lf초 소요됨\n",km, hour, min, sec);

	return 0;
}
