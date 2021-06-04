#include<stdio.h>
int main() {
	int x=1;
	
	if(x==1) // 실행 코드가 한 줄일 경우 괄호를 사용하지 않아도 된다. 
		printf("1입니다");
	
	else // 만일 같은 비교문에서 위에 if문이 참이라면 이 코드는 실행되지 않는다. 
		printf("1이 아닙니다.");
		
	return 0; // 종료 
}
