#include <stdio.h>

int main(void)
{
	double velocity=300000;
	double distance=149600000;
	double time;
	
	printf("빛의 속도는 %fkm/s\n",velocity);
	
	printf("태양과 지구와의 거리%fkm\n",distance);
	
	time=distance/velocity;
	printf("도달 시간은 %f초",time);
	
	return 0;
}
