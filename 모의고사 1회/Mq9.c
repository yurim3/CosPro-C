#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* ���ĺ� ���ڿ��� �־��� ��, �����ϴ� �ߺ� ���ڸ� �����Ϸ��� �մϴ�.  ���� ���, "senteeeencccccceeee"��� ���ڿ��� �־����ٸ�,
   "eeee" �� "e" ��, "cccccceeee " �� "ce" �� �����Ͽ� �ߺ��Ǵ� ���ڸ� �����Ͽ� "sentence"��� ������� ���ɴϴ� */

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