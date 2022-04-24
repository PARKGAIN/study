#include <stdio.h>

int main(void)
{
	int number;
	printf("숫자를 입력하시오. :");
	scanf("%d", &number);
	 
	int i = 1;
	double factorial = 1; //곱하기 결과 초기화
	
	while(i <= number)
	{
		factorial = factorial*i;
		i++;
	 }
	 printf("%d!은 %.0f입니다.\n", number, factorial);
	 return 0;
	 
}
