#include <stdio.h>

typedef struct{
	int quotient;  // ��
	int remainder; // ������
}Div;

extern Div IntDiv(int num1, int num2);

int main(){
	Div val = IntDiv(5, 2);
	printf("��: %d \n", val.quotient);
	printf("������: %d \n", val.remainder);
	return 0;
}
