#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int* solution(int arr[], int arr_len) {
	int left = 0; 
	int right = arr_len - 1;

	while (left < right) { //left와 right가 같으면 종료 -> left <= right로 사용해도 ㄱㅊ
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
	int arr[5] = { 8, 7, 6, 5, 5};
	ans = solution(arr, 5);
	for (int i = 0; i < 5; i++) {
		printf("%3d", ans[i]);
	}
}