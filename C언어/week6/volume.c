#include <stdio.h>

int main(void)
{
	double length,height,cero;
	double volume;
	
	printf("가로세로 높이를 입력하세요:");
	scanf("%lf %lf %lf", &length, &height, &cero);
	
	volume=length*height*cero;
	printf("부피는%lf 입니다",volume);
	
	return 0; 
}
