#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//�Ű������� 2���� �迭�� �Ǿ��ִ� ���
int func_a(char(*p)[20], int n) { //p: �迭�� ��ġ�� ����ų ������ ����, n: �迭�� ����
								  //n�� ���� ũ��
							      //char p[][20]
	for (int i = 0; i < n; i++) {
		printf("%s\n", p[i]); //5�� ��� -> %s�� ���ڹ迭�� �Ѳ����� ���
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 20; j++) {
			printf("%c\n", p[i][j]); //-> for������ %c�� �� ���ھ� ���
		}
	}
	return 0;
}

//�Լ����� ���޹��� ���ڹ迭�� ���ο��� ����� ���
int main() {
	char titles[5][20] = { "first", "second", "third", "four", "five" };
	func_a(titles, 5); //2���� �迭 ����
}