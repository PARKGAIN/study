#include <stdio.h>

int main(void)
{
	int i = 1;
	int factorial = 1;
	
	while(i <= 10) //1���� 10�� �� 
	{
		factorial = factorial*i;
		i++;
	}
	printf("10!�� %d�Դϴ�.\n", factorial);
	return 0;
}
