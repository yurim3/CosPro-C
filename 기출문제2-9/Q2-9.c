#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 두 자연수 n부터 m까지의 합을 구하려고 합니다 */

int func_a(int k) {
	int sum = 0;
	for (int i = 0; i <= k; ++i)
		sum += i;
	return sum;
}
int solution(int n, int m) {
	int sum_to_m = func_a(m);
	int sum_to_n = func_a(n-1); //<- n부터의 합을 구해야 하므로 n-1까지 합
	int answer = sum_to_m - sum_to_n;
	return answer;
}

int main(void) {
	int ans;
	ans = solution(9, 10);
	printf("%d", ans);
}