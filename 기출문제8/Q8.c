#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool solution(char* sentence) {
	char* str = (char*)malloc(sizeof(char) * 103); //char str[103]; -> 배열 생성
	int len = 0;
	for (int i = 0; i < strlen(sentence); i++) {
		char ch = sentence[i]; //ch 문자열 값 하나를 저장
		if (ch != ' ' && ch != '.') str[len++] = ch; //공백이 아니고 .이 아니면 ch를 str에 추가?
	}
	for (int i = 0; i < len / 2; i++) { //배열 길이의 반만 비교(길이/2)
		if (str[i] != str[len - 1 - i]) return false; //가장 왼쪽, 가장 오른쪽(null 때문에 -1) 비교해서 같지 않으면.
	}
	return true;
}

void main() {
	char* s1 = { "ra cc.ar" }; //0(false)

	bool ans = solution(s1);
	printf("%d", ans);
}