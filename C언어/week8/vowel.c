#include <stdio.h>

int main(void)
{
	char ch;
	printf("글자를 입력하시오: ");
	scanf("%c", &ch);
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("%c은 모음입니다.\n", ch);
			break;
		default:
			printf("%c은 자음입니다.\n",ch);
	 } 
	return 0;
}
