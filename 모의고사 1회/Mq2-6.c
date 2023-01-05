#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 학생들의 몸무게가 들어있는 목록에서 몸무게가 k보다 큰 사람은 몇 명인지 구하려 합니다.
   예를 들어 다음과 같은 목록에서 몸무게가 75보다 큰 사람은 2명입니다 */

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