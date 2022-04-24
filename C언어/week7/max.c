#include <stdio.h>

int main(void)
{
	int x,y,z,max;
	printf("수를 입력하시오:");
	scanf("%d", &x);
	
	printf("수를 입력하시오: ");
	scanf("%d", &y);
	
	printf("수를 입력하시오: ");
	scanf("%d", &z);
	if(x>y)
		if(x>z)
		max = x;
		else max =z;
	else
	if(y>z)
	 max = y;
	 else max = z;
	 
	printf("큰수는 %d \n", max);
	return 0; 
}

