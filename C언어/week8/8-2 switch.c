#include <stdio.h>

int main(void)
{
	int number;
	printf("���� �Է��Ͻÿ� :");
	scanf("%d", &number);
	
	switch(number)
	{
	case 1:
		printf("January \n");
		break;
	case 2:
		printf("Feburary \n");
		break;
	case 3:
		printf("March \n");
		break;
	default :
		printf("�𸣰ڽ��ϴ�.\n");
		break;
	return 0;
	}
}
