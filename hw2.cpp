#include<stdio.h>

int main()
{
	int allowance = 278970;
	int oman, man, ocheon, cheon, obaek, baek, osip, sip;
	
	oman = (allowance / 50000);
	allowance = allowance - (oman * 50000);
	printf("50000�� �� \=\> %d��\n", oman);

	man = (allowance / 10000);
	allowance = allowance - (man * 10000);
	printf("10000�� �� \=\> %d��\n", man);

	ocheon = (allowance / 5000);
	allowance = allowance - (ocheon * 5000);
	printf("5000�� �� \=\> %d��\n", ocheon);

	cheon = (allowance / 1000);
	allowance = allowance - (cheon * 1000);
	printf("1000�� �� \=\> %d��\n", cheon);

	obaek = (allowance / 500);
	allowance = allowance - (obaek * 500);
	printf("500�� �� \=\> %d��\n", obaek);

	baek = (allowance / 100);
	allowance = allowance - (baek * 100);
	printf("100�� �� \=\> %d��\n", baek);

	osip = (allowance / 50);
	allowance = allowance - (osip * 50);
	printf("50�� �� \=\> %d��\n", osip);

	sip = (allowance / 10);
	allowance = allowance - (sip * 10);
	printf("10�� �� \=\> %d��\n", sip);

	return 0;
}