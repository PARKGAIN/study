#include <stdio.h>

int main(void)
{
	double fact = 1;
	int i,n;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);
	
	for(i =1;i <=n; i++)
		fact = fact * i;
	
	printf("%d!�� %lf�̴�.\n",n,fact);
	 
	return 0;
}
