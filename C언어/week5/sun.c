#include <stdio.h>

int main(void)
{
	double velocity=300000;
	double distance=149600000;
	double time;
	
	printf("���� �ӵ��� %fkm/s\n",velocity);
	
	printf("�¾�� �������� �Ÿ�%fkm\n",distance);
	
	time=distance/velocity;
	printf("���� �ð��� %f��",time);
	
	return 0;
}
