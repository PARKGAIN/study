#include <stdio.h>
int main(void)
{
	int i = 10;
	int *p;
	
	p = &i;
	
	printf("i의 값=%d\n", i);
	printf("i의 주소=%d\n", &i);
	
	printf("p의 값=d\n", p);
	printf("*p의 값=%d\n", *p);
	
	return 0;
}
