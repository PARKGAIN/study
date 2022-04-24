#include <stdio.h>

int main(void)
{
	int month,day,year;
	int ticket;
	float discount;
	
	printf("오늘의 날짜를 입력하시오(YYYY.DD.YY 형식으로): ");
	scanf("%d.%d.%d",&year, &month, &day);
	
	printf("요즘 영화 한편 보려면 얼마나 하나요?");
	scanf("%d", &ticket);
	
	printf("멤버쉽 카드가 있으면 몇 퍼센트나 할인되나요?");
	scanf("%f", &discount);
	
	printf("\n%d년 %d월 %d일 저녁에\n",year, month, day);
	printf("%d원으로 영화 한편 보면 어때요?\n", ticket);
	printf("%.2f%나할인받을 수 있는데요!",discount);
	return 0;
}
