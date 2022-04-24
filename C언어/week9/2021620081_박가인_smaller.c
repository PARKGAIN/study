/*작성일 : 2021.05.04.
  작성자 : 소프트웨어공학과 2021620081 박가인
  소스파일내용 : 3개의 정수를 입력 받아서 가장 작은 수를 출력하는 프로그램*/
 
 #include<stdio.h>
 
 int main(void)
 {
 	int x,y,z,min;
	 
	printf("첫번째 정수: ");
	scanf("%d", &x);
	 
	printf("두번째 정수: ");
	scanf("%d", &y);
	 
	printf("세번째 정수: ");
	scanf("%d", &z);
	
	if(x<y){
		min = x;
	}else {
		min = y;
	}
	if(z<min){
		min = z;
    }else{
    	min = min;
	}
	printf("입력한 %d, %d, %d중 가장 작은 수는 %d입니다.", x,y,z,min);
	
	return 0;
}
