#include <stdio.h>

int main(void)
{
	int x, y, q, r;
	
	printf("2���� ������ �Է��Ͻÿ�(�� 9 2): ");
	scanf("%d %d", &x, &y);
	
	q=x/y;
	r=x%y;
	
	printf("���� %�Դϴ�. \n", q);
	printf("�������� %d�Դϴ�. \n", r);
	
	return 0;
}
