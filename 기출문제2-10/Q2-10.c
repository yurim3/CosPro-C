#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 자연수가 담겨있는 nx4크기의 2차원 배열에 저장된 값들의 평균을 구한 후 평균보다 작은 수들을 찾으려 합니다. */

int func_a(int a[][4], int n) {
	int total = 0;
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			total += a[r][c];
		}
	}
	return total / (n * 4);
}

int* func_b(int a[][4], int n, int val) {
	int* ret = (int*)malloc(sizeof(int) * (n * 4));
	int k = 0;
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (a[r][c] < val) ret[k++] = a[r][c];
		}
	}
	ret[k] = -1;
	return ret;
}

int* solution(int arr[][4], int n) {
	int avg = func_a(arr, n);
	int* answer = func_b(arr, n, avg);
	return answer;
}

int main(void) {
	int arr[][4] = { {5,12,4,31},{24,13,11,2},{43,41,19,26},{33,65,20,21} };
	int arr_len = sizeof(arr) / sizeof(arr[0]);
	int* result = solution(arr, arr_len);
	printf("평균보다 작은 값들: ");
	for (int i = 0; result[i] != -1; ++i) {
		printf("%d \t", result[i]);
	}
}