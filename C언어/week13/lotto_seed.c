#include <stdio.h>
#include <stdlib.h>  //ǥ�� ���̺귯�� �Լ� ����
#include <time.h>    //�ð� �Լ� ����

#define MAX 45  //��ȣ����� �ִ밪 ����

int main(void)
{
	int i;
	srand((unsigned)time( NULL ));  //seed�߻� 
	for(i=0; i<6; i++)
	{
		printf("%d ", 1+ (rand()% MAX));  //�����߻� 
	}
	printf("\n");
	return 0;
 } 
