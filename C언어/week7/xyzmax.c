#include <stdio.h>

int main(void)
{
	int x,y,z,max;
	
	printf("수를 입력하시오:");
	scanf("%d", &x);
	
	printf("수를 입력하시오:");
	scanf("%d", &y);
	
	printf("수를 입력하시오:");
	scanf("%d", &z);
	
	if(x>y)
	{
		max = x;
	}else {
	max = y;}
	if(z>max){
	max = z;}
	else
	{
		max = max;
	}
	printf("가장 큰 수는 %d입니다",max);
	return 0;
}
