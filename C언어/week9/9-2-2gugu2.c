#include <stdio.h>

int main(void)
{
	int i = 1;
	int a;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &a);
	
	while (i <=9)
	{
		//printf("3*%d = %d\n", i, 3 * i);
		printf("%d * %d = %d\n", a, i, a*i);
		i++;
	}
	return 0;
}
