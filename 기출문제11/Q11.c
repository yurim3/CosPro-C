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
	int sum_to_m = func_a(m); //1���� m������ �հ�
	int sum_to_n = func_a(n - 1); //1���� n-1������ �հ�
	int answer = sum_to_m - sum_to_n; //�� ���� ��
	return answer;
}
void main() {
	int ans;
	ans = solution(5, 10);
	printf("%d", ans);
}