#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 가장 많은 방문객 수와 두 번째로 많은 방문객 수의 차이를 구하려고 합니다.  */

int* func_a(int arr[], int arr_size, int num) {
	int* ret = (int*)malloc(sizeof(int) * (arr_size - 1));
	int idx = 0;
	for (int i = 0; i < arr_size; ++i)
		if (arr[i] != num) // arr 배열에서 num을 제외하고 복사
			ret[idx++] = arr[i];
	return ret;
}
int func_b(int a, int b) { // 두 값의 차이(뺄셈의 결과)를 반환하는 함수
	if (a >= b)
		return a - b;
	else
		return b - a;
}
int func_c(int arr[], int arr_size) { // arr 배열 요소 중 최대값을 반환하는 함수
	int ret = -1;
	for (int i = 0; i < arr_size; ++i)
		if (ret < arr[i])
			ret = arr[i];
	return ret;
}

int solution(int visitor[], int n) {
	int max_first = func_c(visitor, n);// 1. 가장 많은 방문객 수
	int* visitor_removed = func_a(visitor, n, max_first); // 2. 1항이 제거된 배열
	int max_second = func_c(visitor_removed, n - 1);// 3. 가장 많은 방문객 수
	int answer = func_b(max_first, max_second); // 4. 구한 값의 차이 구하기
	return answer;
}

void main() {
	int ans;
	int v[] = { 4, 7, 2, 9, 3 };
	ans = solution(v, 5);
	printf("%d", ans); //2
}