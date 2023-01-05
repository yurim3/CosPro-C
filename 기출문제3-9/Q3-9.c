#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* �̱� ������ ���� 2, �� ������ ���� 0 �� �ο��ϰ� ���º��� ���� �����ϴ�.
  A B C D
A X 1 0 0
B 0 X 0 1
C 1 1 X 1
D 1 0 0 X
>> A ���� B ������ �̱�� C �� D �����Դ� ����.
   B ���� D ������ �̱�� A �� C �����Դ� �̰��.
   C ���� ��� ������ �̰��.
   D ���� A ������ �̱�� B �� C �����Դ� ����.
*/

int* solution(int scores[][4], int scores_len) {
	int* result = (int*)malloc(sizeof(int) * scores_len);
	for (int i = 0; i < 4; i++) {
		result[i] = 0;
		for (int k = 0; k < 4; k++) {
			if (i != k) { //<=> i == k�� ���� �ڱ� �ڽ����� �����ٴ� ���� �ǹ���?
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
