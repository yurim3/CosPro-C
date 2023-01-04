#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
/* �ҹ��� ���ĺ�, ����(' '), �׸��� ��ħǥ('.')�� �̷���� ������ ȸ������ �����Ϸ� �մϴ�.
   ���� ������ ���ĺ��� �����Ͽ��� ������ ����Ϸ��� �մϴ�. �������,��never odd or even."�� ���� ������ ȸ���Դϴ�. */

bool solution(char* sentence) {
	char* str = (char*)malloc(sizeof(char) * 103);
	int len = 0;
	for (int i = 0; sentence[i] != 0; i++) {
		char ch = sentence[i];
		if (ch != ' ' && ch != '.') str[len++] = ch;
	}
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i]) return false;
	}
	return true;
}

void main() {
	char string[] = "korean fighting";
	char s2[] = "saas";
	bool result1 = solution(string);
	bool result2 = solution(s2);
	printf("%d \n", result1);
	printf("%d \n", result2);
}