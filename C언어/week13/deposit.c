#include <stdio.h>
void sum_it(int money); //함수 정의

int main (void)
{
	int i;
	for(i=0; i<5; i++)
		sum_it(i);    //함수호출 
	return 0;	
}
void sum_it(int money){
	static int sum = 0;  //정적변수초기화
	sum += money; //값누적
	printf("현재의 합계는 %d입니다. \n",sum); 
}
