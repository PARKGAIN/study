#include <stdio.h>

int main(void)
{
	double volume;
	double radius=3;
	const double PI=3.14192;
	
	volume=4.0*PI*(radius*radius*radius)/3.0;
	printf("���Ǻ���:%f\n", volume);
	
	return 0;
	
}
