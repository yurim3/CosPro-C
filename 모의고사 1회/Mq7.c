#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 주어진 배열의 순서를 뒤집으려고 합니다. 예를 들어 주어진 배열이 [1,4,2,3]이면 순서를 뒤집은 배열은 [3,2,4,1]입니다 */
int* solution(int arr[], int arr_len) {
	int left = 0;
	int right = arr_len - 1;
		while (left < right) {
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left += 1;
			right -= 1;
		}
	return arr;
}

void main() {
	int* ans;
	int arr[5] = { 8, 7, 6, 5, 4 };
	ans = solution(arr, 5);
	for (int i = 0; i < 5; i++) {
		printf("%3d", ans[i]);
	}
}