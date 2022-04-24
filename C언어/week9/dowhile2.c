#include <stdio.h>

int main(void)
{
	int x, sum = 0;
	do {
		printf("정수를 입력하시오(0이면 종료):");
		scanf("%d", &x);
		sum = sum+ x;	 
	}while (x != 0);
	
	printf("정수의 합계 : %d\n", sum);
	return 0;
}
