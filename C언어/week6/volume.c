#include <stdio.h>

int main(void)
{
	double length,height,cero;
	double volume;
	
	printf("���μ��� ���̸� �Է��ϼ���:");
	scanf("%lf %lf %lf", &length, &height, &cero);
	
	volume=length*height*cero;
	printf("���Ǵ�%lf �Դϴ�",volume);
	
	return 0; 
}
