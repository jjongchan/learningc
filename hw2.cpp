#include<stdio.h>

int main()
{
	int allowance = 278970;
	int oman, man, ocheon, cheon, obaek, baek, osip, sip;
	
	oman = (allowance / 50000);
	allowance = allowance - (oman * 50000);
	printf("50000원 권 \=\> %d개\n", oman);

	man = (allowance / 10000);
	allowance = allowance - (man * 10000);
	printf("10000원 권 \=\> %d개\n", man);

	ocheon = (allowance / 5000);
	allowance = allowance - (ocheon * 5000);
	printf("5000원 권 \=\> %d개\n", ocheon);

	cheon = (allowance / 1000);
	allowance = allowance - (cheon * 1000);
	printf("1000원 권 \=\> %d개\n", cheon);

	obaek = (allowance / 500);
	allowance = allowance - (obaek * 500);
	printf("500원 권 \=\> %d개\n", obaek);

	baek = (allowance / 100);
	allowance = allowance - (baek * 100);
	printf("100원 권 \=\> %d개\n", baek);

	osip = (allowance / 50);
	allowance = allowance - (osip * 50);
	printf("50원 권 \=\> %d개\n", osip);

	sip = (allowance / 10);
	allowance = allowance - (sip * 10);
	printf("10원 권 \=\> %d개\n", sip);

	return 0;
}