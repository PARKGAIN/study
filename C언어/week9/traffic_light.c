#include <stdio.h>

int main(void)
{
	char color;
	
	do
	{
		printf("��ȣ�� ������ �Է��ϼ���(r, y, g):");
		scanf("%c", &color);
	}while (color != 'r' && color != 'y' && color != 'g');
	
	switch (color)
	{
		case 'r':
			printf("����!\n");
			break;
		case 'y' :
			printf("����!\n");
			break;
		case 'g':
			printf("����!\n");
			break;
	}
	return (0);
}
