#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//동적 배열로 변환하기
int* solution(int len) {
	int* arr = (int*)malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++) {
		arr[i] = i + 100;
	}
	return arr;
}

int main() {
	int* result;
	result = solution(10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", result[i]);
	}
}