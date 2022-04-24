#include <stdio.h>
void send(int i); //함수정의

int main(void)
{
	int i;
	for(i=0; i<5; i++)
		send(i);
	return 0;
 }
void send (int i)
{
 	static int inited = 0; //정적 변수 선언 및 초기화
	if(inited == 0)
	{
		printf("네트워크가 초기화되었습니다. \n");
		inited = 1; 
	 }
	 
	printf("%d를 보냈습니다.\n", i);
}
