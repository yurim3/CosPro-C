#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* 등급	할인율
	S	  5%
	G	  10%
	V	  15% */
//strcmp(비교 문자열 1, 비교 문자열 2), 같으면 0, 다르면 1 반환.

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