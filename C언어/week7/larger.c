#include <stdio.h>

int main(void)
{
	int x,y,max;
	
	printf("첫 번째 정수: ");
	scanf("%d", &x);
	
	printf("두 번째 정수: ");
	scanf("%d", &y);
	
	if(x > y)
		max =x;
	else
		max =y;
		
	printf("큰 수는 %d\n", max);
	return 0;	
}
