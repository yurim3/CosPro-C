#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int func_a(int k) {
	int sum = 0;
	for (int i = 0; i <= k; ++i)
		sum += i;
	return sum;
}
int solution(int n, int m) {
	int sum_to_m = func_a(m); //1부터 m까지의 합계
	int sum_to_n = func_a(n - 1); //1부터 n-1까지의 합계
	int answer = sum_to_m - sum_to_n; //두 값의 차
	return answer;
}
void main() {
	int ans;
	ans = solution(5, 10);
	printf("%d", ans);
}