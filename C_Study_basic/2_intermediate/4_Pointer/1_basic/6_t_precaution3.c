#include <stdio.h>

void main(){
	
	int num=7;
	double *pnum;

	// ������ ������ ���� Ÿ���� ������ �ּҸ� �Ҵ���� �� �ִ�.
	// ��Ȳ�� ���� �پ��� ������ �߻��Ѵ�.
	*pnum = &num;	

	printf("num: %d\n", num);
	printf("*pnum: %llf\n", *pnum);
}