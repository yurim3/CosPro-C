#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* �л����� Ű�� ��� �ִ� ��Ͽ��� Ű�� k���� ū ����� �� ������ ���Ϸ� �մϴ�. */
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