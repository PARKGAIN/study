/*�ۼ��� : 2021.05.18.
 *�ۼ��� : ����Ʈ������а� 2021620081 �ڰ���
 *�ҽ����ϳ��� : ���ǰ��� �Է¹޾Ƽ� �ִ밪, �ּҰ�, ��հ��� ����ϴ� ���α׷�*/
  
#include <stdio.h>

int main(void)
{
	int i ,goods, price; //�Էº��� 
	int min = 100000, max = -100000; //�ʱ�ȭ
	int sum, avg;
	
	sum = 0;
	do{
		printf("��ǰ������ �Է��Ͻÿ�:  ");
		scanf("%d", &goods);
	}while (goods < 1 || goods > 3);
	
	for(i = 0; i< goods; i++){
		do{
			printf("%d��° ��ǰ�� ������ �Է��Ͻÿ�: ", i + 1);
			scanf("%d", &price);
		}while (price < 1000 || price > 10000);
		if(price < min)
			min = price;
		if(price > max)
			max = price;
		sum = sum + price; // ��ǰ ������ �� 
	}
	avg = sum/goods;
	printf(" �ִ밪:   %d �ּҰ�:   %d ��հ�: %d ", max,min,avg);
	return 0;
}
