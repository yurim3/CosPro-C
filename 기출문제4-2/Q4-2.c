#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* ���� ���� �� ����� �� �ִ� �ߴ� g ������ [ 1, 2, 3, 5, 7, 11, 13, 17, 19, 23 ] �������� ��� 1���� ����Ǿ� �ֽ��ϴ�.
   �����ִ� �߷� � ������ ���Ը� �� �� ���� ������ ������ �̷�� ���� ������ ���� ���� ���� ���Ϸ��� �մϴ� */

int solution(int arr[], int arr_len, int payload) {
	int cnt = 0;
	int weight = 0;
	int diff = 0;
	for (int i = arr_len-1; i >= 0; --i) {
		diff = payload - weight;
		if (diff >= arr[i]) {
			weight += arr[i];
			cnt++;
		}
	}
	if (weight != payload)
		cnt = 0;
	return cnt;
}

int main(void) {
	int arr[] = { 1,2,3,11,13,17,23 };
	for (int i = 10; i <= 100; i += 10) {
		int result = solution(arr, sizeof(arr) / sizeof(arr[0]), i);
		printf("%d - %d \n", i, result);
	}
}

