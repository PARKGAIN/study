#include <stdio.h>
#include <stdlib.h>  //표준 라이브러리 함수 포함
#include <time.h>    //시간 함수 포함

#define MAX 45  //기호상수로 최대값 선언

int main(void)
{
	int i;
	srand((unsigned)time( NULL ));  //seed발생 
	for(i=0; i<6; i++)
	{
		printf("%d ", 1+ (rand()% MAX));  //난수발생 
	}
	printf("\n");
	return 0;
 } 
