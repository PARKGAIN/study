#include <stdio.h>

int main(void)
{
	int x,y,max;
	
	printf("ù ��° ����: ");
	scanf("%d", &x);
	
	printf("�� ��° ����: ");
	scanf("%d", &y);
	
	if(x > y)
		max =x;
	else
		max =y;
		
	printf("ū ���� %d\n", max);
	return 0;	
}
