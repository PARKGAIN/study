#include <stdio.h>

void print_lines() //줄 그리기 함수
{
	printf("---------------\n");
	printf("---------------\n");
 }
 int main(void)
{
	int i;
	print_lines(); //함수 호출 
	
	for(i=0; i<5; i++) 
	printf("%d의 제곱은 %d \n", i, i*i);
	print_lines(); //함수호출
	return 0; 
}
