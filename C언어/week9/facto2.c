#include <stdio.h>

int main(void)
{
	int number;
	printf("���ڸ� �Է��Ͻÿ�. :");
	scanf("%d", &number);
	 
	int i = 1;
	double factorial = 1; //���ϱ� ��� �ʱ�ȭ
	
	while(i <= number)
	{
		factorial = factorial*i;
		i++;
	 }
	 printf("%d!�� %.0f�Դϴ�.\n", number, factorial);
	 return 0;
	 
}
