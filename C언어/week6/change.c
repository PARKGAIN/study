#include <stdio.h>

int main(void)
{
	int money,price,change;
	
	printf("고객으로부터 받은 돈: ");
	scanf("%d", &money);
	
	printf("물건 값: ");
	scanf("%d", &price);
	
	change=(money-price);
	printf("오천원: %d\n",change/5000);
	printf("천원: %d\n",(change%5000)/1000);
	printf("오백원: %d\n",(change%5000%1000)/500);
	printf("백원: %d\n",(change%5000%1000%500)/100);
	
	return 0;
}
