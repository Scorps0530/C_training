#include <stdio.h>

// char data[5][4]			// 5�� 4�� ������ �迭 -> (y��ǥ, x��ǥ) �������� ���
// char temp[2][3] = { {1,2,3},{4,5,6} };		// 2���� �迭�� �ʱ�ȭ

/*
char temp[M][N];
char test[L] ( L = M*N )
test[a] �׸�� temp[a/N][a%N] �׸��� ��ġ�� ����
temp[b][c] �׸�� test[b*N+c] �׸��� ��ġ�� ����
*/

void main() {
	int data[7] = { 6,3,9,7,2,4,1 }; // �� ���ڵ��� ũ������� �迭�غ��ÿ�.
	
	printf("���� �� :");
	for (short i = 0; i < 7; i++)	printf(" %d", data[i]);

	// �⺻ ���� data[1]�� data[2]���� ũ�ٸ� data[1]�� data[2]�� ������ �ٲ۴�
	for (short i=0; i<6; i++)
		for (short j = i+1; j < 7; j++)
			if (data[i] > data[j]) {
				short temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}

	printf("\n���� �� :");
	for (short i = 0; i < 7; i++)	printf(" %d", data[i]);
}