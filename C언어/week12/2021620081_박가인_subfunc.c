/* �ۼ��� : 2021.06.01.
   �ۼ��� : ����Ʈ������а� 2021620081 �ڰ���
   �ҽ����ϳ��� :  ������� ���� ���ϴ� ���α׷�*/
   
#include <stdio.h>
int prime(int);   //����� ��� �Լ�
int get_number(void);   //�Է��Լ� 

int main(void)
{
	int n,result;
	n =get_number();  //�Է��Լ� ȣ��
	result = prime(n);   //������� �� ��� �Լ�	
	printf("%d�� ������� ���� %d�Դϴ�.\n",n,result); 
	return 0;
}
int get_number(void)    //�Է��Լ�
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);//���� �Է�
	return n;// n ������ ����� ���� ���� 
 }
 
int prime(int n)  //��� �� ��� �Լ�
{
	int i, sum = 0;
	
	for(i=1; i<=n; i++)
	{
		if( n% i == 0)
		{
			printf("%d�� ����Դϴ�.\n", i);
			sum = sum+i;  //���� ���� 0�̸� ���� �����Ѵ� 
		}
		else
			printf("%d�� ����� �ƴմϴ�.\n", i);
	}
	return sum; //sum���� ���� 
 } 
