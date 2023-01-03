#include <stdio.h>

//함수의 매개변수 전달
//1>> 값에 의한 전달 -> 값을 복사하고 전달 -> 매개변수 일반형
int Add(int x, int y) {
	return x + y;
}

int main() {
	int x = 5, y = 7, z;
	z = Add(x, y);
	printf("x + y = %d\n", z);
	printf("x, y: %d, %d\n", x, y);
}