#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	// ������ ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// �Ǽ��� ����
	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	// ���
	/*const int YEAR = 2000;
	printf("�¾ �⵵ : %d\n", YEAR);*/

	// printf
	//printf("%d + %d = %d\n", 3, 7, 3 + 7);

	//scanf
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	// ����(�� ����), ���ڿ�(���� ����)
	/*char c = 'A';
	printf("%c\n", c);
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	// ������Ʈ
	// �������� �������� ������ �Լ� (���� �ۼ�)
	// �̸� ���� ������ Ű ���˸�
	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("���̰� ���̿���? ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� kg�̿���? ");
	scanf("%f", &weight);

	double height;
	printf("Ű�� �� cm����? ");
	scanf("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������? ");
	scanf(" %[^\n]s", what);

	// ���� ���� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf(" �̸�		: %s\n", name);
	printf(" ����		: %d\n", age);
	printf(" ������		: %.2f\n", weight);
	printf(" Ű		: %.2lf\n", height);
	printf(" ����		: %\s\n", what);

	return 0;
}