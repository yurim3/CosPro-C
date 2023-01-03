#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	//배열 선언과 크기 알아보기
	int arr[10]; //자료형 배열명[크기] -> 정적 배열
	//배열의 크기는: sizeof(배열명)
	printf("arr 배열의 크기: %d\n", sizeof(arr));
	printf("arr 배열 요소의 크기: %d\n", sizeof(arr[0]));
	printf("arr 배열의 길이: %d\n", 10);

	//배열의 요소 사용
	arr[1] = 7;
	printf("배열 요소의 값: %d\n", arr[1]);

	//배열 공간 벗어나는 부분 주의: 조건식을 작성할 범위
	int i;
	for (i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}

	for (i = 0; i < 10; i++) {
		printf("arr[%d]: %d\n", i, arr[i]);
	}
}