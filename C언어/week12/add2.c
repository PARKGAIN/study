#include <stdio.h>

int square(int n); // 함수선언

int main(void) 
{
	int result;
	result = square(5);
	printf("제곱값은 : %d \n",result);
}

int square(int n)  //제곱함수 
{
	return(n*n);
}
