#include <stdio.h>

//swap, ���� ����, �ּҿ� ���� ����
void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("�Լ� �ȿ����� ó��: %d, %d\n", a, b);
}

int main() {
	int a = 5, b = 8;
	printf("�Լ� ȣ�� �� %d, %d\n", a, b);
	swap(a, b);
	printf("�Լ� ȣ�� �� %d, %d\n", a, b);
}