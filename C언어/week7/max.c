#include <stdio.h>

int main(void)
{
	int x,y,z,max;
	printf("���� �Է��Ͻÿ�:");
	scanf("%d", &x);
	
	printf("���� �Է��Ͻÿ�: ");
	scanf("%d", &y);
	
	printf("���� �Է��Ͻÿ�: ");
	scanf("%d", &z);
	if(x>y)
		if(x>z)
		max = x;
		else max =z;
	else
	if(y>z)
	 max = y;
	 else max = z;
	 
	printf("ū���� %d \n", max);
	return 0; 
}

