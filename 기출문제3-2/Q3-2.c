#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* �� �μ����� ��û�ϴ� ������ ȸ�� �� ���� ������ ��û�� �׼���ŭ �����մϴ�.
   ��� ��û ������ ������ �� �ִ� ��쿡�� ��û�� �ݾ��� �״�� ����.
   ��� ��û ������ ������ �� ���� ��쿡�� ���� �ݾ��� ����. */

int func_a(int arr[], int len) { //�հ� ���ϴ� �Լ�
	int total = 0;
	for (int i = 0; i < len; ++i) {
		total += arr[i];
	}
	return total;
}

int* solution(int total, int arr[], int arr_len) {
	int* result = (int*)malloc(sizeof(int) * arr_len); //
	int req_total = func_a(arr, arr_len); //��û�� ������ total
	if (req_total > total) { //��û�� ���� ����(1000)���� ũ��
		for (int i = 0; i < arr_len; ++i) {
			result[i] = total / arr_len;
		}
	}
	else {
		for (int i = 0; i < arr_len; ++i) {
			result[i] = arr[i];
		}
	}
	return result;
}

int main(void) {
	int req_arr[4] = { 250, 400, 200, 300 };
	int arr_len = sizeof(req_arr) / sizeof(req_arr[0]);
	int total = 1000;
	int* result = solution(total, req_arr, arr_len);
	for (int i = 0; i < arr_len; ++i) {
		printf("[%d] ", result[i]);
	}
}