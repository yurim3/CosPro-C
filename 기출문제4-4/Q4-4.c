#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
/* ���ڿ��� ù���ڸ� �������� ������ ���ڵ��� ������ ��Ģ���� �ٲٷ��� �մϴ�. �����ϴ� ��Ģ�� �Ʒ��� �����ϴ�.
   ù ���ڴ� ���ذ����ν� �������� �ʴ´�.
   ù ���ڿ� �ٸ� ���ڸ� ���� ������ �ٲ۴�.
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