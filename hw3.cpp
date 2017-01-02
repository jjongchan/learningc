#include<stdio.h>

int main()
{
	int time_by_sec = 54321; // 초 단위로 주어진 시간
	int hour, min, sec;
	sec = time_by_sec; //초에 주어진 값을 대입
	hour = (sec / 3600); // 초를 이용하여 시간을 계산
	sec = sec - (hour * 3600);// 초에서 시간단위만큼 빼줌
	
	min = (sec / 60); // 남은 초에서 분을 계산
	sec = sec - (min * 60); // 분을 뺀 나머지가 초

	printf("%d초는 %d시간 %d분 %d초 입니다.\n", time_by_sec, hour, min, sec);

	return 0;

}