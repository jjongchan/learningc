#pragma warning(disable : 4996)
#include<stdio.h>
#include<string.h>

int main()
{
	char f_name[100], l_name[100];
	int f_amount, l_amount;
	printf("#���� �Է��Ͻÿ� : ");
	scanf("%s", f_name);
	printf("#�̸��� �Է��Ͻÿ� : ");
	scanf("%s", l_name);
	printf("%s %s\n", f_name, l_name);

	f_amount = strlen(f_name);
	l_amount = strlen(l_name);
	printf("%*d %*d\n", f_amount, f_amount, l_amount, l_amount);

	return 0;

}