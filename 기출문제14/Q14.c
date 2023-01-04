#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 85점~100점 : A학점
   70점~84점 : B학점
   55점~69점 : C학점
   40점~54점 : D학점
   0점~39점: F학점 */

int* solution(int scores[], int scores_len) {
	int* grade_counter = (int*)malloc(sizeof(int) * 5);
	for (int i = 0; i < 5; ++i)
		grade_counter[i] = 0;
	for (int i = 0; i < scores_len; ++i)
	{
		if (scores[i] <= 100 && scores[i] >= 85) //85이상
			grade_counter[0] += 1;
		else if (scores[i] <= 84 && scores[i] >= 70) //70이상
			grade_counter[1] += 1;
		else if (scores[i] <= 69 && scores[i] >= 55) //55이상
			grade_counter[2] += 1;
		else if (scores[i] <= 54 && scores[i] >= 40) //40 이상
			grade_counter[3] += 1;
		else
			grade_counter[4] += 1;
	}
	return grade_counter;
}

void main() {
	int score[] = { 86, 72, 98, 60, 45 };
	int* ans = solution(score, 5);
	for (int i = 0; i < 5; i++) {
		printf("%3d", ans[i]);
	} // {2, 1, 1, 1, 0}
}
