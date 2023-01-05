#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 무게 측정 시 사용할 수 있는 추는 g 단위로 [ 1, 2, 3, 5, 7, 11, 13, 17, 19, 23 ] 열가지로 모두 1개씩 구비되어 있습니다.
   남아있는 추로 어떤 구슬의 무게를 잴 때 양팔 저울이 균형을 이루는 추의 개수가 가장 적은 것을 구하려고 합니다 */

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

