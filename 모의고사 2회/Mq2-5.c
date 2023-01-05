#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 예를 들어 주어진 문자열이 ab1c3d 라면 ab8c6d 라는 문자열을 만들면 됩니다. 각 숫자들의 보수 관계는 아래와 같습니다 .
‘0’ ‘9’
‘1’ ‘8’
‘2’ ‘7’
‘3’ ‘6’
‘4’ ‘5’*/

char* solution(char* s) {
	char* s_ret = (char*)malloc(sizeof(char) * (strlen(s) + 1));
	strcpy(s_ret, s);
	for (int i = 0; s_ret[i] != 0; ++i) {
		if ('0' <= s_ret[i] && s_ret[i] <= '9') s_ret[i] = 'i' - s_ret[i];
	}
	return s_ret;
}

int main(void) {
	char string[] = "cos pro 2018 to 2019";
	char* result = solution(string);
	printf("%s \n", result);
}