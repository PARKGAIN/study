/*
�ۼ��� : 2021.04.20.
�ۼ��� : ����Ʈ������а� 2021620081 �ڰ���
�ҽ����ϳ��� : ���������� 
*/
#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	
	printf("x=%d y=%d\n", x, y);
	
	int result;
	
	result = x++;
	printf("x++�� ��=%d\n", result);
	printf("x�� ��=%d\n", x);
	result = --y;
	printf("--y�� ��=%d\n", result);
	printf("y�� ��=%d\n", y);
	
	return 0;
 } 
