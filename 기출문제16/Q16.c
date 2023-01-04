#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 학생들이 키가 들어 있는 목록에서 키가 k보다 큰 사람은 몇 명인지 구하려 합니다. */
int solution(int height[], int height_len, int k) {
	int answer = 0;
	for (int i = 0; i < height_len; ++i)
		if (height[i] > k)
			answer++;
	return answer;
}

void main() {
	int data[] = { 170, 180, 168, 183, 173 };
	int ans = solution(data, 5, 168);
	printf("%d", ans); //2
}