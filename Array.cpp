#include <stdio.h>

// char data[5][4]			// 5행 4열 이차원 배열 -> (y좌표, x좌표) 형식으로 사용
// char temp[2][3] = { {1,2,3},{4,5,6} };		// 2차원 배열의 초기화

/*
char temp[M][N];
char test[L] ( L = M*N )
test[a] 항목과 temp[a/N][a%N] 항목은 위치가 같다
temp[b][c] 항목과 test[b*N+c] 항목은 위치가 같다
*/

void main() {
	int data[7] = { 6,3,9,7,2,4,1 }; // 이 숫자들을 크기순으로 배열해보시오.
	
	printf("정렬 전 :");
	for (short i = 0; i < 7; i++)	printf(" %d", data[i]);

	// 기본 원리 data[1]이 data[2]보다 크다면 data[1]과 data[2]의 순서를 바꾼다
	for (short i=0; i<6; i++)
		for (short j = i+1; j < 7; j++)
			if (data[i] > data[j]) {
				short temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}

	printf("\n정렬 후 :");
	for (short i = 0; i < 7; i++)	printf(" %d", data[i]);
}