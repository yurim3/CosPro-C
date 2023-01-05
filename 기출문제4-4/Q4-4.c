#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
/* 문자열의 첫글자를 기준으로 나머지 글자들을 일정한 규칙으로 바꾸려고 합니다. 변경하는 규칙은 아래와 같습니다.
   첫 글자는 기준값으로써 변경하지 않는다.
   첫 글자와 다른 글자를 더한 값으로 바꾼다.
 */

int func_a(char dest[], char src[]) {
	int i;
	dest[0] = src[0];
	for (i = 1; src[i] != 0; ++i) {
		dest[i] = src[i] + dest[0];
	}
	dest[i] = 0;
	return 0;
}
char* solution(char string[]) {
	char* encoded = (char*)malloc(sizeof(char) * (strlen(string) + 1));
	func_a(encoded, string);
	return encoded;
}

int main(void) {	
	char string[] = "korean fighting";
	char* result = solution(string);
	printf("%s \n", result);
	return 0;
}