#include<stdio.h>

int main()
{

	/*
	1���� �� , ��, ��, �ʷ� ȯ���ϴ� ���α׷�
	1���� 365.23422���̴� �̴� ����, ��ð�, ��� , �����ΰ� ����Ͻÿ�
	��, �ʼ��� �Ҽ��� ���� ��° �ڸ����� ����Ͻÿ�.
	������
	365.2422���� 365�� 5�ð� 48�� 46.08���Դϴ�.
	*/
	double sec, dday = 365.2422;
	double ddays = dday;
	//%.2lf
	int day, hour, min;
	day = (int)dday / 1;
	dday = dday - day;
	hour = dday * 24;
	dday = (dday*24) - hour;
	min = dday * 60;
	dday = (dday*60) - min;
	sec = dday * 60;
	printf("%.4lf���� %d�� %d�ð� %d�� %.2lf���Դϴ�.\n",ddays, day, hour ,min, sec);
	
	return 0;
}