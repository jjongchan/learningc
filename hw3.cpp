#include<stdio.h>

int main()
{
	int time_by_sec = 54321; // �� ������ �־��� �ð�
	int hour, min, sec;
	sec = time_by_sec; //�ʿ� �־��� ���� ����
	hour = (sec / 3600); // �ʸ� �̿��Ͽ� �ð��� ���
	sec = sec - (hour * 3600);// �ʿ��� �ð�������ŭ ����
	
	min = (sec / 60); // ���� �ʿ��� ���� ���
	sec = sec - (min * 60); // ���� �� �������� ��

	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", time_by_sec, hour, min, sec);

	return 0;

}