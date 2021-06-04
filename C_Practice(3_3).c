#include<stdio.h>
int main() {
	int x=1;
	
	if(x>=1) // x가 1보다 크면? 
		printf("x는 1 이상 입니다.");
		
	else // 위에 조건문이 모두 '거짓'이면 실행한다. 
		printf("x는 1 보다 작습니다.");
		
	return 0; // 종료 
}
