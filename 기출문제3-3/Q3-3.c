#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

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