#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

int main() {

	/*int b = 20;
	printf("b �� %d\n", ++b); -> 21
	printf("b�� %d\n", b++); -> 21
	printf("b�� %d\n", b); -> 22 */

	// �ݺ���
	// for, while, do while

	//for (����; ����; ����)
	/*for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}*/

	// while (����)
	/*int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i++);
	}*/

	// do {	} while (����);
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	//  2�� �ݺ���
	/*for (int i = 1; i <= 3; i++) {
		printf("ù ��° �ݺ��� : %d\n", i);
		
		for (int j = 1; j <= 5; j++) {
			printf("	�� ��° �ݺ��� : %d\n", j);
		}
	}*/

	/*
	*
	**
	***
	****
	*****
	*/
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*
			*
		  **
		***
	  ****
	*****
	*/
	/*for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++)
			printf(" ");
		for (int k = 0; k <= i; k++)
			printf("*");
		printf("\n");
	}*/

	// ������Ʈ - �Ƕ�̵带 �׾ƶ�
	/*
	SSSS*
	SSS***
	SS*****
	S*******
	*********
	*/
	system("mode con:cols=230 lines=80");

	int floor;
	printf("�� ������ �װڴ���? ");
	scanf("%d", &floor);
	
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++)
			printf(" ");
		for (int k = 0; k < i * 2 + 1; k++)
			printf("*");
		printf("\n");
	}

	return 0;
}