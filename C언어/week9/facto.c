#include <stdio.h>

int main(void)
{
	int i = 1;
	int factorial = 1;
	
	while(i <= 10) //1부터 10까 지 
	{
		factorial = factorial*i;
		i++;
	}
	printf("10!은 %d입니다.\n", factorial);
	return 0;
}
