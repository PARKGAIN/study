#include <stdio.h>

int main(void)
{
	int x, sum = 0;
	do {
		printf("������ �Է��Ͻÿ�(0�̸� ����):");
		scanf("%d", &x);
		sum = sum+ x;	 
	}while (x != 0);
	
	printf("������ �հ� : %d\n", sum);
	return 0;
}
