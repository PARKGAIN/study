/* �ۼ���: 2021.04.20.
   �ۼ���: ����Ʈ������а� 2021620081 �ڰ���
   �ҽ����ϳ���: �ڵ����� �ӵ��� ����Ÿ��� ����ð� ��� ���α׷�*/
   
#include <stdio.h>

int main(void)
{
	int car_speed = 80;
	double distance = 500;
	double time;
	
	printf("�ڵ����� �ӵ��� %dkm/h\n",car_speed);
	time = distance/car_speed;
	printf("�ڵ����� %.2f�ð� ���� ������ �Ÿ��� %.2fkm �̴�.\n",time, distance);
	
	return 0;
 } 
