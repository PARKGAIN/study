/* 작성일 : 2021.06.01.
   작성자 : 소프트웨어공학과 2021620081 박가인
   소스파일내용 :  문자열 입출력 프로그램*/
   
#include <stdio.h>

int main(void)
{
	char study[] = "C언어를 배우고 있습니다.";
	printf("%s \n", study);   //문자열 배열을 출력 
	
	char word[100], i;
	printf("영문 단어를 하나 입력하시오: ");
	
	scanf("%s",word);
	i = 0;
	while(word[i] != '\0')   //null 문자인가 검사 
		i++;      //null문자가 아니면 하나 증가 
		
	printf("문자열의 길이:%d \n", i);
	return 0;
 } 
