#include<stdio.h>
int main() {
	int x,y;
	
	printf("x를 입력: ");
	scanf("%d",&x); // scanf 함수를 사용하면 자동으로 줄 바꿈 됨
	
	printf("y를 입력: ");
	scanf("%d",&y);
	
	printf("\n==계산결과==\n\n");
	
	printf("%d + %d = %d\n",x,y,x+y);
	printf("%d - %d = %d\n",x,y,x-y);
	printf("%d * %d = %d\n",x,y,x*y);
	printf("%d / %d = %d...%d\n",x,y,x/y,x%y);
	// 정수형 이므로 몫 보다 나누는 값이 크면 나누어지지 않는다. 
	 
}
