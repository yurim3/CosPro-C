#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
/* 선생님은 올해 담임을 맡은 반 학생 중에서 1학년부터 5학년까지 같은 반이었던 적이 가장 많은 학생을 임시 반장으로 정하려고 합니다.
	   1학년 2학년 3학년 4학년 5학년
선생님  2반   6반   1반   7반   3반
학생1   2반   9반   4반   6반   8반
학생2   6     3     4     7     1
학생3   7     7     1     1     2
학생4   8     6     9     7     3
학생5   4     6     5     9     2 
>> 학생 2의 경우 4학년 때 B 선생님의 반이었고 학생 4의 경우 2학년, 4학년, 5학년 때 B 선생님의 반 학생 이었음을 의미합니다. */

int solution(int table[][5], int table_len) {
	int answer = 0;
	int max = 0;
	int sum;
	for (int i = 1; i < table_len; ++i) { //i: 학생
		sum = 0;
		for (int k = 0; k < 5; ++k) { //k: 학년
			if (table[0][k] == table[i][k]) {
				sum++;
			}
		}
		if (max < sum) {
			max = sum;
			answer = i;
		}
	}
	return answer;
}

int main(void) {
	int table[6][5] = { {2,6,1,7,3},// 선생님
					   {2,9,4,6,8},// 학생 1
					   {6,3,4,7,1},// 학생 2
					   {7,7,1,1,2},// 학생 3
					   {8,6,9,7,3},// 학생 4
					   {4,6,5,9,2} };// 학생 5
	int result = solution(table, 6);
	printf("%d \n", result);
}