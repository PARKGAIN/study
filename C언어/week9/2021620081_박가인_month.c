/*�ۼ��� : 2021.05.04.
  �ۼ��� : ����Ʈ������а� 2021620081 �ڰ���
  �ҽ����ϳ���: ���� �Է¹޾Ƽ� ��¥���� ����ϴ� ���α׷� 
  */
  
#include <stdio.h>
int main(void)
{
	int month,days;
	
	printf("���� �Է��Ͻÿ�: ");
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
			days= 31; //1,3,5,7,8,10,12�� 31�� 
			break;
		case 2:
			days= 28; //2���� 28�� 
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days= 30;//4,6,9,11���� 30�� 
			break;
		default:
			days= 0;
			printf("%d�� ���� ���Դϴ�.\n",month); 
			
	 } 
	 printf("%d���� �ϼ��� %d���Դϴ�.\n",month,days);
	 return 0;
 } 
