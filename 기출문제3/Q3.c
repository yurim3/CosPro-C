#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//�ʱ� ���� ���Ǵ� ���ͽ��迡�� 650�� �̻� 800�� �̸��� ������ ����� �л����� ����������� �ϰ� �ֽ��ϴ�.

int solution(int scores[], int scores_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++)
		// scores[i] ����� ���� 650 �̻��̸鼭 800�̸�
		if (650 <= scores[i] && scores[i] < 800)
			count += 1;
	return count;
}

int main() {
	int scores[10] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
	int scores_len = sizeof(scores) / sizeof(scores[0]);
	int result = solution(scores, scores_len);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", result);
}