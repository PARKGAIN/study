#include <stdio.h>

int main(void)
{
	int number;
	int sum = 0;
	
	number = 1;
	
	while(number <= 200)
	{
		if(number % 3 == 0)
			sum += number;
			
			number++;
		
	}
	printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n", sum);
	return 0;
}
