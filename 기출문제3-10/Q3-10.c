#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 1���� ��ǻ�Ͱ� ���� 4�� ���ڿ��� ó���ϴµ� 1���� �ɸ��ٰ� �մϴ�. 
   ���ڿ��� ���̰� 13�� ��� 4 ������ ����� 4�� ó���ϰ� �Ǿ� 4���� �ɸ��� �˴ϴ�. */

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