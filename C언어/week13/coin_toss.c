#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void);   //�Լ�����, ����������

int main(void)
{
	int toss;
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL));  //seed�߻�
	
	for(toss = 0; toss <100; toss++)
	{
		if(coin_toss()== 1)  //�ո��ΰ�?
			heads++;
		else
			tails++;
	 }
	printf("������ �ո�: %d \n", heads);
	printf("������ �޸�: %d \n", tails);
	return 0; 
}
int coin_toss(void)  //���������� �Լ� 
{
	int i = rand() %2 ;  //�������� 0 �Ǵ� 1
	if (i == 0)
	return 0;
	else
	return 1; 
}

