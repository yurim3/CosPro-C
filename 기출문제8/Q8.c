#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool solution(char* sentence) {
	char* str = (char*)malloc(sizeof(char) * 103); //char str[103]; -> �迭 ����
	int len = 0;
	for (int i = 0; i < strlen(sentence); i++) {
		char ch = sentence[i]; //ch ���ڿ� �� �ϳ��� ����
		if (ch != ' ' && ch != '.') str[len++] = ch; //������ �ƴϰ� .�� �ƴϸ� ch�� str�� �߰�?
	}
	for (int i = 0; i < len / 2; i++) { //�迭 ������ �ݸ� ��(����/2)
		if (str[i] != str[len - 1 - i]) return false; //���� ����, ���� ������(null ������ -1) ���ؼ� ���� ������.
	}
	return true;
}

void main() {
	char* s1 = { "ra cc.ar" }; //0(false)

	bool ans = solution(s1);
	printf("%d", ans);
}