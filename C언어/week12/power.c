//�ŵ� ���� ���� ���ϴ� ���� 
#include <stdio.h>
int power(int x,int y);  //�Լ����� ���� 
 
int main(void)
{
	int a,b,result;
	
	printf("�ΰ��� ������ �Է��Ͻÿ�.<��: 3,7> : ");
	scanf("%d %d", &a, &b); //�Է�
	result = power (a,b);
	printf("%d�� %d���� %d�Դϴ�. \n", a,b,result);
	return 0;
}
int power(int x, int y) //�����Լ�
{
	int i;
	int value = 1;
	
	for(i =0; i< y; i++)
		value *= x;
		
	return value;
} 
