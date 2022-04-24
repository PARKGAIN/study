#include <stdio.h>

int main(void)
{
	int i = 1; //초기식을 1부터 
	int sum = 0;
	
	while(i <= 10)
	{
		sum += i;
		i++;
	 }
	 printf("합계=%d\n",sum);
	 return 0; 
}
