#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* �ڿ����� ����ִ� �迭�� ����� ���ϰ�, ��� ������ ���ڴ� �� ���ִ��� ���ϱ�
   ex. [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]�̶�� ����� 5.5, �迭���� ��� ������ ���� 5�� */

int solution(int data[], int data_len) {
	double total = 0;
	for (int i = 0; i < data_len; ++i)
		total += data[i]; //�迭 ����� ���հ�
		//i = 0 -> total = 1, i = 1 -> total += 2,
	int cnt = 0;
	double average = total / data_len;
	for (int i = 0; i < data_len; i++)
		if (data[i] <= average) //�迭 <- ��պ��� ���� ���
			cnt += 1; //cnt �ϳ��� ����
		return cnt;
}

void main() {
	int ans;
	int num[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	ans = solution(num, 10);
	printf("%d", ans);
}