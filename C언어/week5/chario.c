#include <stdio.h>

int main(void)
{
	char initial;
	char grade;
	
	printf("���� �̸� ù���ڴ� �����ΰ���:");
	scanf(" %c", &initial);
	
	printf("���α׷��� ���� ������ ������� �ǳ���?(A���� F)");
	scanf(" %c", &grade);
	
	printf("\n%c���� ���α׷��� ���� ������ %c�Դϴ�.",initial,grade);
	
	return 0;
}
