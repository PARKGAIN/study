#include <stdio.h>

int main(void)
{
	int number;
	printf("���� �Է��Ͻÿ� :");
	scanf("%d", &number);
	
	if(number == 1)
		printf("January\n");
	else if(number == 2)
		printf("Febuary\n");
	else if(number == 3)
		printf("March\n");
	else 
		printf("�𸣰ڽ��ϴ�.\n");
	return 0;
}

