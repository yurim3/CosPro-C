#include <stdio.h>

//�Լ� ����
int isTimeOfTwo(int n) {
	return (n % 2 == 0) ? 1 : 0;
}

int main() {
	if (isTimeOfTwo(10) == 1) {
		printf("2�� ���");
	}
	else {
		printf("2�� ��� �ƴ�");
	}
}
