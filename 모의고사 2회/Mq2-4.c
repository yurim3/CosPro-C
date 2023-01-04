#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 85점 ~ 100점 : A 학점
   70점 ~ 84점 : B 학점
   55점 ~ 69점 : C 학점
   40점 ~ 54점 : D 학점
    0점 ~ 39점 : F 학점 */

int* solution(int scores[], int scores_len) {
	int* grade_counter = (int*)malloc(sizeof(int) * 5); //각 학점을 받은 사람의 개수를 세는 배열?
	for (int i = 0; i < 5; ++i)
		grade_counter[i] = 0;
			for (int i = 0; i < scores_len; ++i) {
				if (scores[i] >= 85)
					grade_counter[0] += 1;
				else if (scores[i] >= 70)
					grade_counter[1] += 1;
				else if (scores[i] >= 55)
					grade_counter[2] += 1;
				else if (scores[i] >= 40)
					grade_counter[3] += 1;
				else
					grade_counter[4] += 1;
			}
	return grade_counter;
}

void main() {
	int scores[] = { 10,20,30,40,50,60,70,80 };
	int len = sizeof(scores) / sizeof(scores[0]);
	int* result = solution(scores, len);
	for (int i = 0; i < 5; ++i) {
		printf("%d ", result[i]);
	}
	printf("\n");
}