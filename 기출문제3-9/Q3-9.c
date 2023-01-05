#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 이긴 팀에는 승점 2, 진 팀에는 승점 0 을 부여하고 무승부인 경우는 없습니다.
  A B C D
A X 1 0 0
B 0 X 0 1
C 1 1 X 1
D 1 0 0 X
>> A 팀은 B 팀에겐 이기고 C 와 D 팀에게는 졌다.
   B 팀은 D 팀에겐 이기고 A 와 C 팀에게는 이겼다.
   C 팀은 모든 팀에게 이겼다.
   D 팀은 A 팀에겐 이기고 B 와 C 팀에게는 졌다.
*/

int* solution(int scores[][4], int scores_len) {
	int* result = (int*)malloc(sizeof(int) * scores_len);
	for (int i = 0; i < 4; i++) {
		result[i] = 0;
		for (int k = 0; k < 4; k++) {
			if (i != k) { //<=> i == k일 때는 자기 자신팀을 만났다는 것을 의미함?
				result[i] += (scores[i][k] * 2);
			}
		}
	}
	return result;
}

int main(void) {
	int scores[4][4] = { {-1, 1, 0, 0},{ 0,-1, 0, 1},{ 1, 1,-1, 1}, { 1, 0, 0,-1} };
	int* result = solution(scores, 4);
	for (int i = 0; i < 4; ++i) {
		printf("[%d] ", result[i]);
	}
}
