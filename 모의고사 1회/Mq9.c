#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 알파벳 문자열이 주어질 때, 연속하는 중복 문자를 삭제하려고 합니다.  예를 들어, "senteeeencccccceeee"라는 문자열이 주어진다면,
   "eeee" 은 "e" 로, "cccccceeee " 는 "ce" 로 연속하여 중복되는 문자를 제외하여 "sentence"라는 결과물이 나옵니다 */

char* solution(char* characters) {
	char* result = malloc(sizeof(char) * strlen(characters));
	int result_len = 0;
	result[0] = characters[0];
	result_len++;
	for (int i = 1; i < strlen(characters); i++) {
		if (characters[i - 1] != characters[i]) {
			result[result_len] = characters[i];
			result_len++;
		}
	}
	result[result_len] = NULL;
	return result;
}

	void main() {
		char* characters = "seeennteeeenccccceeee";
		char* result = solution(characters);
		printf("%s \n", result);
		return 0;
	}