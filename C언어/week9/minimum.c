#include <stdio.h>
#include <limits.h>

int main(void)
{
	int number,min_value = 100000; //min�� ū���� �Է��� ���´�.
	
	printf("������ �Է��Ͻÿ�(����� Ctrl+z)\n");
	
	while (scanf("%d", &number) != EOF) //�Է� ���� ���� Ctrl+z�ΰ�?
	{
		if (number < min_value)
			min_value = number; 
	 }
	 printf("�ּҰ��� %d \n", min_value);
		return 0;
}
