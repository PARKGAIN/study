/* �ۼ��� : 2021.06.01.
   �ۼ��� : ����Ʈ������а� 2021620081 �ڰ���
   �ҽ����ϳ��� :  ���ڿ� ����� ���α׷�*/
   
#include <stdio.h>

int main(void)
{
	char study[] = "C�� ���� �ֽ��ϴ�.";
	printf("%s \n", study);   //���ڿ� �迭�� ��� 
	
	char word[100], i;
	printf("���� �ܾ �ϳ� �Է��Ͻÿ�: ");
	
	scanf("%s",word);
	i = 0;
	while(word[i] != '\0')   //null �����ΰ� �˻� 
		i++;      //null���ڰ� �ƴϸ� �ϳ� ���� 
		
	printf("���ڿ��� ����:%d \n", i);
	return 0;
 } 
