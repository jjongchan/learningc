#include<stdio.h>
int printAge(int);// ���� ����Լ� �����
int printHeight(double);// Ű ��� �Լ� �����

int main() // ���� �Լ�
{
	char name[20] = "������"; //����
	int age = 24; 
	double height = 179.2;

	printf("���� : %s\n", name); // ���� 
	printAge(age);
	printHeight(height);

	return 0;
}

int printAge(int A) // ���� ����Լ� ���Ǻ�
{
	printf("���� : %d\n", A);
	return 0;
}
int printHeight(double H) // Ű ��� �Լ� ���Ǻ�
{
	printf("Ű :%f\n", H);
	return 0;
}