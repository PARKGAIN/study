#include <stdio.h>

int main(void)
{
	char c;
	
	for( ;; )
	{
		printf("어떤 키나 누르세요, q는 종료 : ");
		scanf("%c", &c);
		if(c == 'q')
			break;
	}
	printf("Break! \n");
	return 0;
}
