#include <stdlib.h>  //표준 라이브러리 함수 포함 
#include <stdio.h>
#include <time.h>   //시간함수 포함 
void disp_car(int car_number, int distance);    //함수정의

int main(void)
{
	int i;
	int car1_dist = 0, car2_dist = 0; //거리 초기화
	
	srand((unsigned)time(NULL));  //seed 발생
	
	for(i=0; i < 5; i++) {   //5회 반복
		car1_dist += rand() %100;  //자동차 주행 거리를 난수로 결정 
		car2_dist += rand() %100;
		disp_car(1, car1_dist);  //진행거리 표시 함수 호출 
		disp_car(2, car2_dist);
		printf("-----------------------\n");
		getch();   //사용자 키 입력을 기다리는 함수 
	}
	return 0;
 }
 
void disp_car(int car_number, int distance)
{
	int i;
	
	printf("CAR #%d:", car_number);
	for(i=0; i < distance /10; i++) {  //주행표시 반복 
		printf("*"); //주행표시 
	}
	printf("\n"); 
 } 

