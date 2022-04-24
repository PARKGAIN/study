#include <stdio.h>

int main(void)
{
	int i,sum,limit;
	
	sum = 0;
	printf("어디까지 계산할까요: ");
	scanf("%d", &limit);
	
	for(i=1; i <=limit; i++)
		sum += i;
		
	printf("1부터 %d까지의 정수의 합=%d\n", limit, sum);
	
	return 0;
}
