#pragma warning(disable : 4996)
#include<stdio.h>

int main()
{
	char name[100];
	printf("�̸��� �Է��Ͻÿ� : ");
	scanf("%s", name);
	printf("\"%s\"\n",name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);

	return 0;
}