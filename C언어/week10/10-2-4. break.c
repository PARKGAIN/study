#include <stdio.h>

int main(void)
{
	char c;
	
	for( ;; )
	{
		printf("� Ű�� ��������, q�� ���� : ");
		scanf("%c", &c);
		if(c == 'q')
			break;
	}
	printf("Break! \n");
	return 0;
}
