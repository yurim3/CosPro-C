#include <stdio.h>

//함수 정의
int isTimeOfTwo(int n) {
	return (n % 2 == 0) ? 1 : 0;
}

int main() {
	if (isTimeOfTwo(10) == 1) {
		printf("2의 배수");
	}
	else {
		printf("2의 배수 아님");
	}
}
