#include <stdio.h>

int main(void)
{
	int money,price,change;
	
	printf("�����κ��� ���� ��: ");
	scanf("%d", &money);
	
	printf("���� ��: ");
	scanf("%d", &price);
	
	change=(money-price);
	printf("��õ��: %d\n",change/5000);
	printf("õ��: %d\n",(change%5000)/1000);
	printf("�����: %d\n",(change%5000%1000)/500);
	printf("���: %d\n",(change%5000%1000%500)/100);
	
	return 0;
}
