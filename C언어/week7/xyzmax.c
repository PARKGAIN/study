#include <stdio.h>

int main(void)
{
	int x,y,z,max;
	
	printf("���� �Է��Ͻÿ�:");
	scanf("%d", &x);
	
	printf("���� �Է��Ͻÿ�:");
	scanf("%d", &y);
	
	printf("���� �Է��Ͻÿ�:");
	scanf("%d", &z);
	
	if(x>y)
	{
		max = x;
	}else {
	max = y;}
	if(z>max){
	max = z;}
	else
	{
		max = max;
	}
	printf("���� ū ���� %d�Դϴ�",max);
	return 0;
}
