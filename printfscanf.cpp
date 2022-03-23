#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	// 정수형 변수
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// 실수형 변수
	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	// 상수
	/*const int YEAR = 2000;
	printf("태어난 년도 : %d\n", YEAR);*/

	// printf
	//printf("%d + %d = %d\n", 3, 7, 3 + 7);

	//scanf
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/

	// 문자(한 글자), 문자열(여러 글자)
	/*char c = 'A';
	printf("%c\n", c);
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름 나이 몸무게 키 범죄명
	char name[256];
	printf("이름이 뭐에요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("나이가 몇이에요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg이에요? ");
	scanf("%f", &weight);

	double height;
	printf("키는 몇 cm에요? ");
	scanf("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요? ");
	scanf(" %[^\n]s", what);

	// 조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf(" 이름		: %s\n", name);
	printf(" 나이		: %d\n", age);
	printf(" 몸무게		: %.2f\n", weight);
	printf(" 키		: %.2lf\n", height);
	printf(" 범죄		: %\s\n", what);

	return 0;
}