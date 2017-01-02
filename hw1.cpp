#include<stdio.h>
int printAge(int);// 나이 출력함수 선언부
int printHeight(double);// 키 출력 함수 선언부

int main() // 메인 함수
{
	char name[20] = "박종찬"; //성명
	int age = 24; 
	double height = 179.2;

	printf("성명 : %s\n", name); // 성명 
	printAge(age);
	printHeight(height);

	return 0;
}

int printAge(int A) // 나이 출력함수 정의부
{
	printf("나이 : %d\n", A);
	return 0;
}
int printHeight(double H) // 키 출력 함수 정의부
{
	printf("키 :%f\n", H);
	return 0;
}