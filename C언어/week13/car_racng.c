#include <stdlib.h>  //ǥ�� ���̺귯�� �Լ� ���� 
#include <stdio.h>
#include <time.h>   //�ð��Լ� ���� 
void disp_car(int car_number, int distance);    //�Լ�����

int main(void)
{
	int i;
	int car1_dist = 0, car2_dist = 0; //�Ÿ� �ʱ�ȭ
	
	srand((unsigned)time(NULL));  //seed �߻�
	
	for(i=0; i < 5; i++) {   //5ȸ �ݺ�
		car1_dist += rand() %100;  //�ڵ��� ���� �Ÿ��� ������ ���� 
		car2_dist += rand() %100;
		disp_car(1, car1_dist);  //����Ÿ� ǥ�� �Լ� ȣ�� 
		disp_car(2, car2_dist);
		printf("-----------------------\n");
		getch();   //����� Ű �Է��� ��ٸ��� �Լ� 
	}
	return 0;
 }
 
void disp_car(int car_number, int distance)
{
	int i;
	
	printf("CAR #%d:", car_number);
	for(i=0; i < distance /10; i++) {  //����ǥ�� �ݺ� 
		printf("*"); //����ǥ�� 
	}
	printf("\n"); 
 } 

