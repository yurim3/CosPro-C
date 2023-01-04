#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
/* 소문자 알파벳, 공백(' '), 그리고 마침표('.')로 이루어진 문장이 회문인지 점검하려 합니다.
   문장 내에서 알파벳만 추출하였을 때만을 고려하려고 합니다. 예를들어,“never odd or even."과 같은 문장은 회문입니다. */

bool solution(char* sentence) {
	char* str = (char*)malloc(sizeof(char) * 103);
	int len = 0;
	for (int i = 0; sentence[i] != 0; i++) {
		char ch = sentence[i];
		if (ch != ' ' && ch != '.') str[len++] = ch;
	}
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i]) return false;
	}
	return true;
}

void main() {
	char string[] = "korean fighting";
	char s2[] = "saas";
	bool result1 = solution(string);
	bool result2 = solution(s2);
	printf("%d \n", result1);
	printf("%d \n", result2);
}