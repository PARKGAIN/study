#include <stdio.h>

void print_lines() //�� �׸��� �Լ�
{
	printf("---------------\n");
	printf("---------------\n");
 }
 int main(void)
{
	int i;
	print_lines(); //�Լ� ȣ�� 
	
	for(i=0; i<5; i++) 
	printf("%d�� ������ %d \n", i, i*i);
	print_lines(); //�Լ�ȣ��
	return 0; 
}
