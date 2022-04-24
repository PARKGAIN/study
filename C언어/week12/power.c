//거듭 제곱 값을 구하는 예제 
#include <stdio.h>
int power(int x,int y);  //함수원형 선언 
 
int main(void)
{
	int a,b,result;
	
	printf("두개의 정수를 입력하시오.<예: 3,7> : ");
	scanf("%d %d", &a, &b); //입력
	result = power (a,b);
	printf("%d의 %d승은 %d입니다. \n", a,b,result);
	return 0;
}
int power(int x, int y) //누승함수
{
	int i;
	int value = 1;
	
	for(i =0; i< y; i++)
		value *= x;
		
	return value;
} 
