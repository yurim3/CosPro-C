#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
	result[result_len] = NULL; //마지막에 null 삽입
	return result;
}

void main() {
	char* ans;
	char* str = { "senteeeencccccceee" };
	ans = solution(str);
	printf("%s", ans);
}