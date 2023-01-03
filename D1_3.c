#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	//1 >> 배열 처리
		//합계
		//합계/최소
	int a[10] = { 1, 2, -4, 56, 8, 89, 77, 23, 4, 22 };
	int max, maxpos;
	max = a[0]; //첫번째 배열값
	maxpos = 0; //현재 위치값 저장

	for (int i = 1; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
			maxpos = i;
		}
	}
	printf("최대값: %d,  요소번호: %d\n", max, maxpos);
}