#include <stdio.h>

int main(void)
{
	char initial;
	char grade;
	
	printf("영어 이름 첫글자는 무엇인가요:");
	scanf(" %c", &initial);
	
	printf("프로그래밍 과목 학점을 물어봐도 되나요?(A부터 F)");
	scanf(" %c", &grade);
	
	printf("\n%c군의 프로그래밍 과목 성적은 %c입니다.",initial,grade);
	
	return 0;
}
