/* 작성일 : 2021.06.01.
   작성자 : 소프트웨어공학과 2021620081 박가인
   소스파일내용 :  약수들의 합을 구하는 프로그램*/
   
#include <stdio.h>
int prime(int);   //약수합 계산 함수
int get_number(void);   //입력함수 

int main(void)
{
	int n,result;
	n =get_number();  //입력함수 호출
	result = prime(n);   //약수들의 합 계산 함수	
	printf("%d의 약수들의 합은 %d입니다.\n",n,result); 
	return 0;
}
int get_number(void)    //입력함수
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);//정수 입력
	return n;// n 변수에 저장된 값을 리턴 
 }
 
int prime(int n)  //약수 합 계산 함수
{
	int i, sum = 0;
	
	for(i=1; i<=n; i++)
	{
		if( n% i == 0)
		{
			printf("%d는 약수입니다.\n", i);
			sum = sum+i;  //나눈 값이 0이면 값을 누적한다 
		}
		else
			printf("%d는 약수가 아닙니다.\n", i);
	}
	return sum; //sum값을 리턴 
 } 
