#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* �л����� �����԰� ����ִ� ��Ͽ��� �����԰� k���� ū ����� �� ������ ���Ϸ� �մϴ�.
   ���� ��� ������ ���� ��Ͽ��� �����԰� 75���� ū ����� 2���Դϴ� */

int solution(int weight[], int weight_len, int k) {
	int answer = 0;
	for (int i = 0; i < weight_len; ++i)
		if (weight[i] > k)
			answer++;
	return answer;
}

void main() {
	int weight[] = { 65,74,83,56,77 };
	int k = 10;
	int result = solution(weight,
		sizeof(weight) / sizeof(weight[0]), k);
	printf("%d \n", result);
}