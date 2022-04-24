/*작성일 : 2021.05.18.
 *작성자 : 소프트웨어공학과 2021620081 박가인
 *소스파일내용 : 물건값을 입력받아서 최대값, 최소값, 평균값을 출력하는 프로그램*/
  
#include <stdio.h>

int main(void)
{
	int i ,goods, price; //입력변수 
	int min = 100000, max = -100000; //초기화
	int sum, avg;
	
	sum = 0;
	do{
		printf("제품개수를 입력하시오:  ");
		scanf("%d", &goods);
	}while (goods < 1 || goods > 3);
	
	for(i = 0; i< goods; i++){
		do{
			printf("%d번째 제품의 가격을 입력하시오: ", i + 1);
			scanf("%d", &price);
		}while (price < 1000 || price > 10000);
		if(price < min)
			min = price;
		if(price > max)
			max = price;
		sum = sum + price; // 제품 가격의 합 
	}
	avg = sum/goods;
	printf(" 최대값:   %d 최소값:   %d 평균값: %d ", max,min,avg);
	return 0;
}
