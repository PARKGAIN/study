/* 원의 둘레와 면적을 계산하는 프로그램*/
#include <stdio.h>
#define PI 3.14
int main(void)
{
	double radius;
	double peri;
	double area;
	
	printf("원의 반지름을 실수로 입력하시오. 예<%.1f> : %.1f\n",10.3,21.4);
	scanf("%lf", &radius);
	
	peri = 2.0*PI*radius;
	area = PI*radius*radius;
	
	printf("원의 둘레: %.2f\n", peri);
	printf("원의 면적: %.4f\n", area);
	return 0;
 } 
