#include <stdio.h>

int main(void)
{
	int count;
	
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &count);
	
	while( count > 0) {
		printf("%d\n",count);
		count--;
	}
	printf("�߻�!\n");
	return 0;
}
