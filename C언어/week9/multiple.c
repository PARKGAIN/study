#include <stdio.h>

int main(void)
{
	int number;
	int sum = 0;
	
	number = 1;
	
	while(number <= 200)
	{
		if(number % 3 == 0)
			sum += number;
			
			number++;
		
	}
	printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.\n", sum);
	return 0;
}
