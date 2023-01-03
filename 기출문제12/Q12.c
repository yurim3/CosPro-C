#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int func_a(int s[], int arr_size) { // �ִ� ���ϴ� �Լ�
	int ret = 0;
	for (int i = 0; i < arr_size; ++i)
		if (s[i] > ret)
			ret = s[i];
	return ret;
}

int func_b(int s[], int arr_size) { // ���� ���ϴ� �Լ�
	int ret = 0;
	for (int i = 0; i < arr_size; ++i)
		ret += s[i];
	return ret;
}
	
int func_c(int s[], int arr_size) { // �ּڰ� ���ϴ� �Լ�
	int ret = 101;
	for (int i = 0; i < arr_size; ++i)
		if (s[i] < ret)
			ret = s[i];
	return ret;
}

int solution(int scores[], int scores_len) {
	int sum = func_b(scores, scores_len); // 1. ������ �� ���ϱ�
	int max_score = func_a(scores, scores_len); // 2. �ְ� ���� ���ϱ�
	int min_score = func_c(scores, scores_len); // 3. ���� ���� ���ϱ�
	return sum - max_score - min_score; // 4. ���������� ������ �� ��ȯ
}

void main() {
	int ans;
	int score[] = { 50, 90, 65, 100 };
	ans = solution(score, 4);
	printf("%d", ans); //15
}