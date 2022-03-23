#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)

// 원형 : void *malloc(size_t size);
// 함수 사용 형식 : void *p = malloc(100);
// 메모리 할당에 실패하면 NULL 반환
// free(p) 로 메모리 할당 해제

/*
예제(p.449)
연령별 윗몸 일으키기 횟수를 입력받는 프로그램
*/

void main() {
	// 연령별 인원수를 저장할 포인터 - 입력받음
	unsigned char* p_limit_table;
	// 연령별 윗몸 일으키기 횟수를 저장할 2차원 포인터
	unsigned char** p;
	// 연령층의 개수를 저장할 변수
	int age_step;


	printf("20대부터 시작해서 연령층이 몇 개인가? ");
	scanf("%d", &age_step);
	
	p_limit_table = (unsigned char*)malloc(age_step);
	p = (unsigned char**)malloc(sizeof(unsigned char*) * age_step);

	for (int age = 0; age < age_step; age++) {
		int temp;
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
		printf("이 연령대는 몇 명입니까? : ");
		
		scanf("%d", &temp);
		*(p_limit_table + age) = (unsigned char)temp;
		*(p + age) = (unsigned char*)malloc(*(p_limit_table + age));

		for (int member = 0; member < *(p_limit_table + age); member++) {
			printf("%dth : ", member + 1);
			scanf("%d", &temp);
			*(*(p + age) + member) = (unsigned char)temp;
		}
	}

	printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");
	for (int age=0; age < age_step; age++) {
		printf("%d0대 : ", age + 2);
		int sum = 0;
		for (int member = 0; member < *(p_limit_table + age); member++) {
			sum = sum + *(*(p + age) + member);
		}
		printf("%5.2f\n", (double)sum / *(p_limit_table + age));
	}

	free(p);
	free(p_limit_table);
}