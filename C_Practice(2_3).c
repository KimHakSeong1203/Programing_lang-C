#include<stdio.h>
int main() {
	int x,y;
	int sum=0; // 0���� �ʱ�ȭ ���־�� �Ѵ�. 
	
	printf("x�� �Է�: ");
	scanf("%d",&x); // scanf �Լ��� ����ϸ� �ڵ����� �� �ٲ� ��
	
	printf("y�� �Է�: ");
	scanf("%d",&y);
	
	sum=x+y;
	printf("\n==���� ���==\n\n");
	
	printf("x+y=%d \n\n",sum); // sum�� ��� 
	printf("x+y=%d", x+y); // �����Ͽ� ��µ� �����ϴ�. 
}
