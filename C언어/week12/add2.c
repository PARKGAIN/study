#include <stdio.h>

int square(int n); // �Լ�����

int main(void) 
{
	int result;
	result = square(5);
	printf("�������� : %d \n",result);
}

int square(int n)  //�����Լ� 
{
	return(n*n);
}
