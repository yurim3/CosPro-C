#include <stdio.h>

//�Ű������� �迭�� ���
int solution(int p[]) {
	printf("p�� ũ�� %d\n", sizeof(p));
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr�� ũ��: %d\n", sizeof(arr));
	solution(arr);
	return 0;
}