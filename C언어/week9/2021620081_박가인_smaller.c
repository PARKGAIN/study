/*�ۼ��� : 2021.05.04.
  �ۼ��� : ����Ʈ������а� 2021620081 �ڰ���
  �ҽ����ϳ��� : 3���� ������ �Է� �޾Ƽ� ���� ���� ���� ����ϴ� ���α׷�*/
 
 #include<stdio.h>
 
 int main(void)
 {
 	int x,y,z,min;
	 
	printf("ù��° ����: ");
	scanf("%d", &x);
	 
	printf("�ι�° ����: ");
	scanf("%d", &y);
	 
	printf("����° ����: ");
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
	printf("�Է��� %d, %d, %d�� ���� ���� ���� %d�Դϴ�.", x,y,z,min);
	
	return 0;
}
