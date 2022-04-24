#include <stdio.h>

int main(void)
{
	int count;
	
	printf("숫자를 입력하시오 : ");
	scanf("%d", &count);
	
	while( count > 0) {
		printf("%d\n",count);
		count--;
	}
	printf("발사!\n");
	return 0;
}
