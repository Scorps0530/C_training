#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)

// ���� : void *malloc(size_t size);
// �Լ� ��� ���� : void *p = malloc(100);
// �޸� �Ҵ翡 �����ϸ� NULL ��ȯ
// free(p) �� �޸� �Ҵ� ����

/*
����(p.449)
���ɺ� ���� ����Ű�� Ƚ���� �Է¹޴� ���α׷�
*/

void main() {
	// ���ɺ� �ο����� ������ ������ - �Է¹���
	unsigned char* p_limit_table;
	// ���ɺ� ���� ����Ű�� Ƚ���� ������ 2���� ������
	unsigned char** p;
	// �������� ������ ������ ����
	int age_step;


	printf("20����� �����ؼ� �������� �� ���ΰ�? ");
	scanf("%d", &age_step);
	
	p_limit_table = (unsigned char*)malloc(age_step);
	p = (unsigned char**)malloc(sizeof(unsigned char*) * age_step);

	for (int age = 0; age < age_step; age++) {
		int temp;
		printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
		printf("�� ���ɴ�� �� ���Դϱ�? : ");
		
		scanf("%d", &temp);
		*(p_limit_table + age) = (unsigned char)temp;
		*(p + age) = (unsigned char*)malloc(*(p_limit_table + age));

		for (int member = 0; member < *(p_limit_table + age); member++) {
			printf("%dth : ", member + 1);
			scanf("%d", &temp);
			*(*(p + age) + member) = (unsigned char)temp;
		}
	}

	printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��\n");
	for (int age=0; age < age_step; age++) {
		printf("%d0�� : ", age + 2);
		int sum = 0;
		for (int member = 0; member < *(p_limit_table + age); member++) {
			sum = sum + *(*(p + age) + member);
		}
		printf("%5.2f\n", (double)sum / *(p_limit_table + age));
	}

	free(p);
	free(p_limit_table);
}