#include <stdio.h>
#define SIZE 10
int main(void)
{
	int n[SIZE] = {12,3,19,6,18,8,12,4,1,19};
	int i, j;
	
	printf("요소    \t값\t     히스토그램 \n");
	for(i=0; i <SIZE; ++i)
	{
		printf("%d\t%d\t", i,n[i]);
		for(j=1; j <=n[i]; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
