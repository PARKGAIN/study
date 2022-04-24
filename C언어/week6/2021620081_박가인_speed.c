/* 작성일: 2021.04.20.
   작성자: 소프트웨어공학과 2021620081 박가인
   소스파일내용: 자동차의 속도와 주행거리로 주행시간 계산 프로그램*/
   
#include <stdio.h>

int main(void)
{
	int car_speed = 80;
	double distance = 500;
	double time;
	
	printf("자동차의 속도는 %dkm/h\n",car_speed);
	time = distance/car_speed;
	printf("자동차가 %.2f시간 동안 진행한 거리는 %.2fkm 이다.\n",time, distance);
	
	return 0;
 } 
