/*작성일 : 2021.05.04.
  작성자 : 소프트웨어공학과 2021620081 박가인
  소스파일내용: 월을 입력받아서 날짜수를 출력하는 프로그램 
  */
  
#include <stdio.h>
int main(void)
{
	int month,days;
	
	printf("달을 입력하시오: ");
	scanf("%d", &month);
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days= 31; //1,3,5,7,8,10,12월 31일 
			break;
		case 2:
			days= 28; //2월은 28일 
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days= 30;//4,6,9,11월은 30일 
			break;
		default:
			days= 0;
			printf("%d는 없는 달입니다.\n",month); 
			
	 } 
	 printf("%d월의 일수는 %d일입니다.\n",month,days);
	 return 0;
 } 
