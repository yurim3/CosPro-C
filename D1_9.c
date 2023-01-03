#include <stdio.h>

//swap, 값에 의한, 주소에 의한 전달
void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("함수 안에서의 처리: %d, %d\n", a, b);
}

int main() {
	int a = 5, b = 8;
	printf("함수 호출 전 %d, %d\n", a, b);
	swap(a, b);
	printf("함수 호출 후 %d, %d\n", a, b);
}