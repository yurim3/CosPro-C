#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* ���� ��� ��Ga#9" �� ������ ��� ��й�ȣ ���ڿ����� ��G', 'a', '#', '9' ���ڰ�
   ���� �ּ� 1�� �̻� �־�� �ϸ� �̸� ���� ����ڰ� �Է��ϴ� ���ڿ��� ���� ���ڵ��� �ִ����� ���ϴ� ����� ������� �մϴ�.
   ���Ե� ��� 1, �׷��� ���� ��� 0�� return */

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