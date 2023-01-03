#include <stdio.h>

//매개변수가 배열일 경우
int solution(int p[]) {
	printf("p의 크기 %d\n", sizeof(p));
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr의 크기: %d\n", sizeof(arr));
	solution(arr);
	return 0;
}