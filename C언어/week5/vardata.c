#include <stdio.h>

int main(void)
{
	int month,day,year;
	int ticket;
	float discount;
	
	printf("������ ��¥�� �Է��Ͻÿ�(YYYY.DD.YY ��������): ");
	scanf("%d.%d.%d",&year, &month, &day);
	
	printf("���� ��ȭ ���� ������ �󸶳� �ϳ���?");
	scanf("%d", &ticket);
	
	printf("����� ī�尡 ������ �� �ۼ�Ʈ�� ���εǳ���?");
	scanf("%f", &discount);
	
	printf("\n%d�� %d�� %d�� ���ῡ\n",year, month, day);
	printf("%d������ ��ȭ ���� ���� ���?\n", ticket);
	printf("%.2f%�����ι��� �� �ִµ���!",discount);
	return 0;
}
