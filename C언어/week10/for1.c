#include <stdio.h>

int main(void)
{
	int i,sum,limit;
	
	sum = 0;
	printf("������ ����ұ��: ");
	scanf("%d", &limit);
	
	for(i=1; i <=limit; i++)
		sum += i;
		
	printf("1���� %d������ ������ ��=%d\n", limit, sum);
	
	return 0;
}
