/* 작성일 : 2021.05.18.
 * 작성자 : 소프트웨어공학과 2021620081 박가인
 *소스파일 내용 : 5의 배수가 입력될 때 까지의 입력된 숫자들의 합
 */

#include <stdio.h>

int main(void)
{
	int x, sum = 0;
	 
	do{
		printf("정수를 입력하시오(5의 배수이면 종료) : ");
		scanf("%d", &x);
		sum += x;
	}while (!(x%5 == 0));
	
	printf("입력된 정수들의 총합계 : %d", sum);
	return 0;
}
