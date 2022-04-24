#include <stdio.h>

int main(void)
{
	int number;
	printf("월을 입력하시오 :");
	scanf("%d", &number);
	
	if(number == 1)
		printf("January\n");
	else if(number == 2)
		printf("Febuary\n");
	else if(number == 3)
		printf("March\n");
	else 
		printf("모르겠습니다.\n");
	return 0;
}

