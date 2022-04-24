#include <stdio.h>
int get_min(int, int);  //함수선언

int main(void)
{
	int n1, n2, result;
	int(*pf)(int, int);
	
	printf("첫 번째값:");
	scanf("%d", &n1);
	printf("두번째값:");
	scanf("%d", &n2);
	
	pf =get_min;
	result = pf(n1, n2);
	
	printf("더 작은 값은 %d입니다.\n", result);
	return 0;
 }
 int get_min(int a, int b)
 {
 	if(a<b)
 		return a;
 	else
 		return b;
 }
