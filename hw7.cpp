#include <stdio.h>
int main()
{
	double km, kmh, sec;
	int hour, min;

	printf("\* �Ÿ��� �Է��Ͻÿ�(km����) : ");
	scanf_s("%lf", &km);
	printf("\* �ü��� �Է��Ͻÿ�(km\/h����) : ");
	scanf_s("%lf", &kmh);
	sec = (km / kmh);
	hour = (km / kmh);
	sec = sec - hour;
	min = sec * 60;
	sec = sec * 60;
	sec = (sec - min)*60;

	printf("%.2lf km \=\> %d�ð� %d�� %.3lf�� �ҿ��\n",km, hour, min, sec);

	return 0;
}
