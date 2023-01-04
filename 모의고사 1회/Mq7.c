#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* �־��� �迭�� ������ ���������� �մϴ�. ���� ��� �־��� �迭�� [1,4,2,3]�̸� ������ ������ �迭�� [3,2,4,1]�Դϴ� */
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