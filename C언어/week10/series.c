#include <stdio.h>

int main(void)
{
	int n,i;
	int result;
	
	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);
	
	result = 0;
	for(i=1; i<=n; i++){
		result += i*i;
	}
	printf("��갪�� %d�Դϴ�. \n", result);
	return 0;
}
