// 거스름돈 계산 프로그램

#pragma warning(disable:4996)
#include <stdio.h>

void main() {
	int price, pay, change;

	printf("물건값 입력 : ");
	scanf("%d", &price);
	printf("내가 낸 돈 입력 : ");
	scanf("%d", &pay);

	change = pay - price;
	printf("만원권 : %d장\n", change / 10000);
	printf("오천원권 : %d장\n", change%10000 / 5000);
	printf("천원권 : %d장\n", change%5000 / 1000);
	printf("오백원권 : %d장\n", change%1000 / 500);
	printf("백원권 : %d장\n", change%500 / 100);
}