#include <stdio.h>
void sum_it(int money); //�Լ� ����

int main (void)
{
	int i;
	for(i=0; i<5; i++)
		sum_it(i);    //�Լ�ȣ�� 
	return 0;	
}
void sum_it(int money){
	static int sum = 0;  //���������ʱ�ȭ
	sum += money; //������
	printf("������ �հ�� %d�Դϴ�. \n",sum); 
}
