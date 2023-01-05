#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 문자열에서 정수를 추출하여 총합을 출력하는 프로그램을 만들려고 합니다. 
   예를 들어 “korean world cup 2018. olympic stadium 10, 11 pm 1."인 문자열에서 정수는 2018, 10, 11, 1 이며
   이들의 총합은 2040 입니다. */

int solution(char string[]) {
	int answer = 0;
	int number = 0;
	for (int i = 0; string[i] != 0; ++i) {
		if ('0' <= string[i] && string[i] <= '9') {
			number = number * 10 + (string[i] - 48);
		}
		else {
			answer += number;
			number = 0;
		}
	}
	return answer;
}

int main(void) {
	char string[] = "korea 2005. 08. 26. pm 1731.";
	int result = solution(string);
	printf("%d \n", result);
}