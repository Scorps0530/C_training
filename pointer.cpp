#include <stdio.h>
void main() {
	short birthday;		// short�� ���� birthday�� ������
	short *ptr;			// �����Ͱ� ����Ű�� ����� ũ�Ⱑ 2����Ʈ�� ������ ������ ������ (�ּ��� ũ��� 4����Ʈ unsigned ����) -> x64 ȯ�濡���� �ּ��� ũ��� 8����Ʈ
	ptr = &birthday;	// birthday ������ �ּҸ� ptr ������ ������
	*ptr = 1042;			// ptr�� ����� �ּҿ� ���� �� 1042�� ������. �� birthday = 1042
	/* ���� | short *ptr; ptr = &birthday; <=> short *ptr = &birthday; */
	printf("birthday�� ���� %d, �ּҴ� %p", birthday, ptr);

}