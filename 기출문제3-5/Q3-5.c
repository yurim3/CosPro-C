#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 카드를 뒤집어서 표시된 수가 높은 쪽이 승리하며 같은 경우에는 무승부로 한다. 
   모든 카드를 뒤집은 후 이긴 횟수가 많은 쪽이 최종 승자가 된다. */

int solution(int mho_arr[], int mhe_arr[], int arr_len) {
	int result = -1;
	int minho = 0;
	int minhee = 0;
	for (int i = 0; i < arr_len; i++) {
		if (mho_arr[i] > mhe_arr[i]) {
			minho++;
		}
		else if (mho_arr[i] < mhe_arr[i]) {
			minhee++;
		}
	}
	if (minho > minhee) {
		result = 1;
	}
	else if (minho < minhee) {
		result = 0;
	}
	return result;
}

int main(void) {
	int mho_arr[] = { 1,6,11,12,2,7,8,9,10,3,4,5,13 };
	int mhe_arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int arr_len = sizeof(mho_arr) / sizeof(mho_arr[0]);
	int result = solution(mho_arr, mhe_arr, arr_len);
	printf("%d \n", result);
}

