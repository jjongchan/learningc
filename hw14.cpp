#pragma warning(disable : 4996)
#include<stdio.h>
#include<string.h>

int main()
{
	char string[100];
	int length;
	printf("*���ڿ� �Է� : ");
	scanf("%s", string);
	length = strlen(string);

	printf("[%*.*s...]",length,length/2,string);
	return 0;
}