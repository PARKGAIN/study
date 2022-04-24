#include <stdio.h>

int main(void)
{
	double light_speed=300000;
	double second =365*24*60*60;
	double distance;
	
	printf("빛의 속도는 %fkm/s\n",light_speed);
	printf("1년은 %f초이다\n",second);
	distance=light_speed*second;
	printf("빛이 진행한 거리는 %fkm",distance); 
	return 0;
}
