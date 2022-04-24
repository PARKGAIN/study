#include <stdio.h>

int main(void)
{
	int x, y, q, r;
	
	printf("2개의 정수를 입력하시오(예 9 2): ");
	scanf("%d %d", &x, &y);
	
	q=x/y;
	r=x%y;
	
	printf("몫은 %입니다. \n", q);
	printf("나머지는 %d입니다. \n", r);
	
	return 0;
}
