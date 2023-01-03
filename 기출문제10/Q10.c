#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 자연수가 들어있는 배열의 평균을 구하고, 평균 이하인 숫자는 몇 개있는지 구하기
   ex. [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]이라면 평균은 5.5, 배열에서 평균 이하인 값은 5개 */

int solution(int data[], int data_len) {
	double total = 0;
	for (int i = 0; i < data_len; ++i)
		total += data[i]; //배열 요소의 총합계
		//i = 0 -> total = 1, i = 1 -> total += 2,
	int cnt = 0;
	double average = total / data_len;
	for (int i = 0; i < data_len; i++)
		if (data[i] <= average) //배열 <- 평균보다 작을 경우
			cnt += 1; //cnt 하나씩 증가
		return cnt;
}

void main() {
	int ans;
	int num[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	ans = solution(num, 10);
	printf("%d", ans);
}