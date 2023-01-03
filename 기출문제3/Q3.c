#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//초급 영어 강의는 토익시험에서 650점 이상 800점 미만의 성적을 취득한 학생만을 수강대상으로 하고 있습니다.

int solution(int scores[], int scores_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++)
		// scores[i] 요소의 값이 650 이상이면서 800미만
		if (650 <= scores[i] && scores[i] < 800)
			count += 1;
	return count;
}

int main() {
	int scores[10] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
	int scores_len = sizeof(scores) / sizeof(scores[0]);
	int result = solution(scores, scores_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n", result);
}