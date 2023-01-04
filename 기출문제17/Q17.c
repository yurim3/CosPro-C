#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 문자열이 주어졌을 때, 문자열에서 ‘a’는 ‘z’로 ‘z’는 ‘a’로 바꾸려고 합니다 */
char* solution(char* s) {
	char* s_ret = (char*)malloc(sizeof(char) * (strlen(s) + 1));
	strcpy(s_ret, s);
	for (int i = 0; s_ret[i] != 0; ++i) {
		if (s_ret[i] == 'a')
			s_ret[i] = 'z';
		else if (s_ret[i] == 'z')
			s_ret[i] = 'a';
	}
	return s_ret;
}

void main() {
	char* data = "azera";
	char* ans = solution(data);
	printf("%s", ans); //zaerz
}