#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 예를 들어 “Ga#9" 로 지정한 경우 비밀번호 문자열에는 ‘G', 'a', '#', '9' 문자가
   각각 최소 1개 이상 있어야 하며 이를 위해 사용자가 입력하는 문자열에 지정 문자들이 있는지를 비교하는 기능을 만들려고 합니다.
   포함된 경우 1, 그렇지 않은 경우 0을 return */

int solution(char pass[], char key[]) {
	int answer = 0;
	int match_cnt = 0;
	for (int i = 0; key[i] != 0; ++i) {
		for (int k = 0; pass[k] != 0; ++k) {
			if (key[i] == pass[k]) {
				match_cnt++;
				break;
			}
		}
	}
	if (match_cnt >= strlen(key)) answer = 1;
	return answer;
}

int main(void) {
	char pass[] = "z9xcGvadsfqer";
	char key[] = "Ga#9";
	int result = solution(pass, key);
	printf("%d \n", result);
}