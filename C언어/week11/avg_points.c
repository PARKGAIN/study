#include <stdio.h>

int main(void)
{
	int scores[3];
	int sum = 0;
	int i;
	double average;
	
	for(i = 0; i< 3; i++)
	{
		printf("���� %d���� ������ ������? ", i+1);
		scanf("%d", &scores[i]);
	}
	
	for(i = 0; i < 3; i++)
		sum += scores[i];
		
	average = ((double)sum /3);
	printf("��� ������ %f�Դϴ�.\n", average);
	
	return (0);
}
