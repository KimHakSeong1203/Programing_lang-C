#include<stdio.h>
int main() {
	int x=1;
	
	if(x==1) // 실행 코드가 한 줄일 경우 괄호를 사용하지 않아도 된다. 
		printf("1입니다.\n");
	
	else if(x==2) // x는 1이라 위에서 참이 되었으므로 실행되지 않는다. 
		printf("2입니다.\n");
		
	if(x==1) // else if 였으면 실행이 안 되겠지만 if므로 비교를 해보고 실행을 한다. 
		printf("숫자입니다.\n"); 
		
	else // 위에 조건문 3개 다 '거짓' 이면 실행된다. 
		printf("1 또는 2도 숫자도 아닙니다.\n");
		
	return 0; // 종료 
}
