#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int solution(int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) {
		int current = i;
		while (current != 0) {
			if (current % 10 == 3 || current % 10 == 6 || current % 10 == 9) {
				//���� �Ѿ�� ���ڰ��� 10���� ���� �������� 3, 6, 9�� ��
				count++; //3, 6, 9�� ������ ���� ����
			}
			current /= 10; //10�� ������ �ڸ����� ����(�ڸ������� 3, 6, 9�� �ִ��� Ȯ���ؾ� �ϴϱ�)
		}
	}
	return count;
}

void main() {
	int ans;
	ans = solution(13); //13�� 4�� ħ
	printf("%d", ans);
}