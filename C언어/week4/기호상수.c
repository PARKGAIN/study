#include <stdio.h>

#define PI 3.141592

int main(void)
{
	float radius=10.0;
	float area;
	
	area = PI*radius*radius;
	printf("원의 면적:%f\n", area);
	
	return 0;

}
