#include <stdio.h>

//�Լ��� �Ű����� ����
//1>> ���� ���� ���� -> ���� �����ϰ� ���� -> �Ű����� �Ϲ���
int Add(int x, int y) {
	return x + y;
}

int main() {
	int x = 5, y = 7, z;
	z = Add(x, y);
	printf("x + y = %d\n", z);
	printf("x, y: %d, %d\n", x, y);
}