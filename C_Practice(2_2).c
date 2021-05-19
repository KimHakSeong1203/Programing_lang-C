#include<stdio.h>
int main() {
	int x,y;
	int sum=0; // 0으로 초기화 해주어야 한다. 
	
	printf("x를 입력: ");
	scanf("%d",&x); // scanf 함수를 사용하면 자동으로 줄 바꿈 됨
	
	printf("y를 입력: ");
	scanf("%d",&y);
	
	sum=x+y;
	printf("\n==연산 결과==\n\n");
	
	printf("x+y=%d \n\n",sum); // sum을 출력 
	printf("x+y=%d", x+y); // 연산하여 출력도 가능하다. 
}
