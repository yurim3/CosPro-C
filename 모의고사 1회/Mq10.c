#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/*  1 �̻��� ������ ����ִ� �迭�� ����� ���ϰ�, ��� �̸��� ���� �� �� �ִ��� ���Ϸ� �մϴ�.
   ���� ��� �־��� ����Ʈ�� [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]�̶��, ����� 5�̹Ƿ� ����Ʈ���� ��� �̸��� ���� 4���Դϴ�.  */

int solution(int data[], int data_len) {
	int total = 0;
	for (int i = 0; i < data_len; ++i)
		total += data[i];
	int cnt = 0;
	int average = total / data_len;
	for (int i = 0; i < data_len; ++i)
		if (data[i] < average)
			cnt += 1;
	return cnt;
}

void main() {
	int arr[] = { 5,12,4,31,13,11,2,41,19,26,65,20,21 };
	int arr_len = sizeof(arr) / sizeof(arr[0]);
	int result = solution(arr, arr_len);
	printf("%d \n", result);
}