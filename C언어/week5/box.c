#include <stdio.h>

int main(void)
{
	double width;
	double length;
	double height;
	double volume;
	
	printf("������ ���� ���� ���̸� �ѹ��� �Է��Ͻÿ�:");
	scanf("%lf %lf %lf", &width,&length,&height);
	
	printf("������ ���Ǵ� %lf�Դϴ�",volume=width*length*height);
	return 0;	
	 
}
