#include <stdio.h>

//주소를 전달받는 함수
void swap(int* pa, int* pb) {
	int a = *pa;
	int b = *pb;
	*pa = b;
	*pb = a; //서로 교환
}

int main() {
	int a = 5, b = 8;
	printf("함수 호출 전: %d, %d\n", a, b);
	swap(&a, &b);
	printf("함수 호출 후: %d, %d\n", a, b);
}