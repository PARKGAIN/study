#include <stdio.h>

int main(void)
{
	int number;
	printf("월을 입력하시오 :");
	scanf("%d", &number);
	
	switch(number)
	{
	case 1:
		printf("January \n");
		break;
	case 2:
		printf("Feburary \n");
		break;
	case 3:
		printf("March \n");
		break;
	default :
		printf("모르겠습니다.\n");
		break;
	return 0;
	}
}
