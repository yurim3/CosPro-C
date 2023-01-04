#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/*  1 이상의 정수가 들어있는 배열의 평균을 구하고, 평균 미만인 값은 몇 개 있는지 구하려 합니다.
   예를 들어 주어진 리스트가 [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]이라면, 평균은 5이므로 리스트에서 평균 미만인 값은 4개입니다.  */

int solution(int data[], int data_len) {
	int total = 0;
	for (int i = 0; i < data_len; ++i)
		total += data[i];
	int cnt = 0;
	int average = total / data_len;
	for (int i = 0; i < data_len; ++i)
		if (data[i] < average)
			cnt += 1;
	return cnt;
}

void main() {
	int arr[] = { 5,12,4,31,13,11,2,41,19,26,65,20,21 };
	int arr_len = sizeof(arr) / sizeof(arr[0]);
	int result = solution(arr, arr_len);
	printf("%d \n", result);
}