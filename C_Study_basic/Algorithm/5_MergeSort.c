/*
 * �պ����� �պ��� �̿��� ���ľ˰�����
 * �� ���� ���ĵ� �迭�� �־����� ��, ���ĵ� �ϳ��� �迭�� �պ�
 * <1,5,6,8> <2,4,7,9> => <1,2,4,5,6,7,8,9>
 * �̹� ���ĵǾ��ִ� �� �迭�� ���� ���ʿ� �ִ� ���ڵ鳢���� ���Ͽ� ����
 * Divide and conquer approach - ũ�Ⱑ Ŀ�� Ǯ�� ����� �ϳ��� ������ 
 * ũ�Ⱑ �۾Ƽ� Ǯ�� ���� ���� ���� ������ �ٲپ Ǫ�� ���
 * Divide n Keys�� �� ���� n/2 Keys�� ������.
 * Conquer �պ������� ����Ͽ� �� ���� �迭�� �����Ѵ�.
 * Combine �� ���� ���ĵ� �迭�� �ϳ��� ��ġ�� ����
 * MERGE_SORT(A,p,r)
 *     if p < r
 * 			q = [(p + r)/2]
 * 			MERGE_SORT(A,p,q)
 * 			MERGE_SORT(A,q+1,r)
 * 			MERGE(A,p,q,r)
 *
 *  < �պ� ������ ����ð� >
 * 	T(n) = Theta(1)				if n = 1
 * 		   2*T(n/2) + Theta(n)	if n > 1
 *
 *  T(n) = c					if n = 1
 *  	   2*T(n/2) + c*n
 *
 *  Theta(nlogn)
 *
 */

#include <stdio.h>

void mergeSort(int *data, int p, int r);
void merge(int *data, int p, int q, int r);

int main(){
	int data[8] = {2,5,3,7,6,9,10,4}, i;
	printf("���� ��\n");
	for(i = 0; i < 8; i++){
		printf("%d ", data[i]);
	}
	mergeSort(data, 0, 7);
	printf("\n���� ��\n");
	for(i = 0; i < 8; i++){
		printf("%d ", data[i]);
	}
}

void mergeSort(int *data, int p, int r){
	int q;
	if(p < r){
		q = (p + r)/2;
		mergeSort(data, p, q);
		mergeSort(data, q + 1, r);
		merge(data, p, q, r);
	}
}

void merge(int *data, int p, int q, int r){
	int i = p, j = q + 1, k = p;
	int tmp[8];
	while(i<q && j<=r){
		if(data[i] <= data[j]){
			tmp[k++] = data[i++];
		}else{
			tmp[k++] = data[j++];
		}
	}
	//while(i<=q){
	//	tmp[k++] = data[i++];
	//}
	//while(j<=r){
	//	tmp[k++] = data[j++];
	//}
	for(int a = p; a<=r; a++){
		*(data+a) = *(tmp+a);
	}
}