#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void);   //함수선언, 동전던지기

int main(void)
{
	int toss;
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL));  //seed발생
	
	for(toss = 0; toss <100; toss++)
	{
		if(coin_toss()== 1)  //앞면인가?
			heads++;
		else
			tails++;
	 }
	printf("동전의 앞면: %d \n", heads);
	printf("동전의 뒷면: %d \n", tails);
	return 0; 
}
int coin_toss(void)  //동전던지기 함수 
{
	int i = rand() %2 ;  //나머지는 0 또는 1
	if (i == 0)
	return 0;
	else
	return 1; 
}

