#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* ���	������
	S	  5%
	G	  10%
	V	  15% */
//strcmp(�� ���ڿ� 1, �� ���ڿ� 2), ������ 0, �ٸ��� 1 ��ȯ.

int solution(int price, char* grade) {
	int answer = 0;
	if (strcmp(grade, "S") == 0) {
		answer = price * 0.95;
	}
	else if (strcmp(grade, "G") == 0) {
		answer = price * 0.90;
	}
	else if (strcmp(grade, "V") == 0) {
		answer = price * 0.85;
	}

	return answer;
}

void main() {
	int ans;
	int price = 10000;
	char* grade = "S";
	ans = solution(price, grade);
	printf("%d", ans);
}