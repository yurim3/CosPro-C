#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 1대의 컴퓨터가 길이 4인 문자열을 처리하는데 1분이 걸린다고 합니다. 
   문자열의 길이가 13인 경우 4 단위로 나누어서 4번 처리하게 되어 4분이 걸리게 됩니다. */

int solution(const char* strings[], int str_len) {
	int result = 0;
	int len;
	for (int i = 0; i < str_len; i++) {
		len = strlen(strings[i]);
		result += (len / 4);
		if (len % 4) //
			result++;
	}
	return result;
}

int main(void) {
	const char* strings[] = { "1234","123456","123456789" };
	int result = solution(strings, 3);
	printf(" %d \n", result);
}