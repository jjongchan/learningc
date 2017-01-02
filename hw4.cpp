#include<stdio.h>

int main()
{

	/*
	1년을 일 , 시, 분, 초로 환산하는 프로그램
	1년은 365.23422일이다 이는 몇일, 몇시간, 몇분 , 몇초인가 출력하시오
	단, 초수는 소수점 이하 둘째 자리까지 출력하시오.
	실행결과
	365.2422일은 365일 5시간 48분 46.08초입니다.
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
	printf("%.4lf일은 %d일 %d시간 %d분 %.2lf초입니다.\n",ddays, day, hour ,min, sec);
	
	return 0;
}