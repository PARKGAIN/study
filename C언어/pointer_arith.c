#include <stdio.h>

int main(void)
{
	char c; short s; int i;
	char *pc;
	short *ps;
	int *pi;
	
	pc = &c; ps = &s; pi= &i;
	printf("증가전 char pc=%d, short ps=%d, int pi=%d\n", pc, ps, pi);
	
	pc++; ps++; pi++;
	printf("증가 후 char pc=%d, short ps= %d, int pi =%d\n", pc, ps, pi);
	return 0;
}
