#include <stdio.h>
int get_min(int, int);  //�Լ�����

int main(void)
{
	int n1, n2, result;
	int(*pf)(int, int);
	
	printf("ù ��°��:");
	scanf("%d", &n1);
	printf("�ι�°��:");
	scanf("%d", &n2);
	
	pf =get_min;
	result = pf(n1, n2);
	
	printf("�� ���� ���� %d�Դϴ�.\n", result);
	return 0;
 }
 int get_min(int a, int b)
 {
 	if(a<b)
 		return a;
 	else
 		return b;
 }
