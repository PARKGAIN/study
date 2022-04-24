#include <stdio.h>

int main(void)
{
	int scores[3];
	int sum = 0;
	int i;
	double average;
	
	for(i = 0; i< 3; i++)
	{
		printf("게임 %d에서 선수의 득점은? ", i+1);
		scanf("%d", &scores[i]);
	}
	
	for(i = 0; i < 3; i++)
		sum += scores[i];
		
	average = ((double)sum /3);
	printf("평균 득점은 %f입니다.\n", average);
	
	return (0);
}
