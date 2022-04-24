#include <stdio.h>

int main(void)
{
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;
	
	printf("float의 크기=%d\n",sizeof(float));
	printf("double의 크기=%d\n",sizeof(double));
	
	printf("x=%.25f\n",x);
	printf("y=%.25f\n",y);
	
	return 0;
}
