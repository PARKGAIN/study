#include <stdio.h>

int main(void)
{
	int x=10;
	int y=20;
	
	printf("변수x의 값은 %d입니다.\n",x);
	
	x=y;
	printf("변수 x의 값은 %d입니다.\n",x);
	
	return 0;
}
