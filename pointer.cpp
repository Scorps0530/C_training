#include <stdio.h>
void main() {
	short birthday;		// short형 변수 birthday를 선언함
	short *ptr;			// 포인터가 가리키는 대상의 크기가 2바이트인 포인터 변수를 선언함 (주소의 크기는 4바이트 unsigned 정수) -> x64 환경에서의 주소의 크기는 8바이트
	ptr = &birthday;	// birthday 변수의 주소를 ptr 변수에 대입함
	*ptr = 1042;			// ptr에 저장된 주소에 가서 값 1042를 대입함. 즉 birthday = 1042
	/* 참고 | short *ptr; ptr = &birthday; <=> short *ptr = &birthday; */
	printf("birthday의 값은 %d, 주소는 %p", birthday, ptr);

}