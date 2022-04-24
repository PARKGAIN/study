/*
작성일 : 2021.04.20.
작성자 : 소프트웨어공학과 2021620081 박가인
소스파일내용 : 증감연산자 
*/
#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	
	printf("x=%d y=%d\n", x, y);
	
	int result;
	
	result = x++;
	printf("x++의 값=%d\n", result);
	printf("x의 값=%d\n", x);
	result = --y;
	printf("--y의 값=%d\n", result);
	printf("y의 값=%d\n", y);
	
	return 0;
 } 
