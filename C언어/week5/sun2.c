#include <stdio.h>

int main(void)
{
	double light_speed=300000;
	double second =365*24*60*60;
	double distance;
	
	printf("���� �ӵ��� %fkm/s\n",light_speed);
	printf("1���� %f���̴�\n",second);
	distance=light_speed*second;
	printf("���� ������ �Ÿ��� %fkm",distance); 
	return 0;
}
