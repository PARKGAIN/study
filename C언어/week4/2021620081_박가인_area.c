/* ���� �ѷ��� ������ ����ϴ� ���α׷�*/
#include <stdio.h>
#define PI 3.14
int main(void)
{
	double radius;
	double peri;
	double area;
	
	printf("���� �������� �Ǽ��� �Է��Ͻÿ�. ��<%.1f> : %.1f\n",10.3,21.4);
	scanf("%lf", &radius);
	
	peri = 2.0*PI*radius;
	area = PI*radius*radius;
	
	printf("���� �ѷ�: %.2f\n", peri);
	printf("���� ����: %.4f\n", area);
	return 0;
 } 
