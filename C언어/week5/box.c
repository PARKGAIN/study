#include <stdio.h>

int main(void)
{
	double width;
	double length;
	double height;
	double volume;
	
	printf("상자의 가로 세로 높이를 한번에 입력하시오:");
	scanf("%lf %lf %lf", &width,&length,&height);
	
	printf("상자의 부피는 %lf입니다",volume=width*length*height);
	return 0;	
	 
}
