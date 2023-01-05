#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 각 부서에서 신청하는 예산을 회사 총 예산 내에서 신청한 액수만큼 배정합니다.
   모든 신청 예산이 배정될 수 있는 경우에는 요청한 금액을 그대로 배정.
   모든 신청 예산을 배정할 수 없는 경우에는 같은 금액을 배정. */

int func_a(int arr[], int len) { //합계 구하는 함수
	int total = 0;
	for (int i = 0; i < len; ++i) {
		total += arr[i];
	}
	return total;
}

int* solution(int total, int arr[], int arr_len) {
	int* result = (int*)malloc(sizeof(int) * arr_len); //
	int req_total = func_a(arr, arr_len); //신청한 예산의 total
	if (req_total > total) { //신청한 값이 예산(1000)보다 크면
		for (int i = 0; i < arr_len; ++i) {
			result[i] = total / arr_len;
		}
	}
	else {
		for (int i = 0; i < arr_len; ++i) {
			result[i] = arr[i];
		}
	}
	return result;
}

int main(void) {
	int req_arr[4] = { 250, 400, 200, 300 };
	int arr_len = sizeof(req_arr) / sizeof(req_arr[0]);
	int total = 1000;
	int* result = solution(total, req_arr, arr_len);
	for (int i = 0; i < arr_len; ++i) {
		printf("[%d] ", result[i]);
	}
}