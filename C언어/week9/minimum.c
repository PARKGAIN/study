#include <stdio.h>
#include <limits.h>

int main(void)
{
	int number,min_value = 100000; //min에 큰값을 입력해 놓는다.
	
	printf("정수를 입력하시오(종료는 Ctrl+z)\n");
	
	while (scanf("%d", &number) != EOF) //입력 받은 것이 Ctrl+z인가?
	{
		if (number < min_value)
			min_value = number; 
	 }
	 printf("최소값은 %d \n", min_value);
		return 0;
}
