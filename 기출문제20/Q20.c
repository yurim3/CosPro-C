#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* �ڿ����� ��� �ִ� n x 4 ũ���� 2���� �迭���� k��°�� ���� ���� ã������ �մϴ�. */
int func_a(int a[][4], int n) { //�ּڰ� ���ϴ� �Լ�	
	int min = 1001;
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (min > a[r][c]) {
				min = a[r][c];
			}
		}
	}
	return min;
}

int func_b(int a[][4], int n, int del) { //del: ���ܸ� ��Ű���� �ϴ� ��(�ּڰ�)
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (del == a[r][c]) { //���ܽ�Ű�����ϴ� ���̸� ���� 1001�� ����(�ּڰ��� �� �� ������ �ƿ� ū ������ ����)
				a[r][c] = 1001; // <-- 1001�� �ּڰ��� �� �� ����.
				return 1;
			}
		}
	}
	return 0;
}

int solution(int arr[][4], int n, int k) {
	int answer = 0;
	int min = 0;
	for (int i = 1; i <= k; i++) { //i ������ 1�̸� ù ��° �ּڰ�(���� ���� ��)
		min = func_a(arr, n); //i ������ k�̸� k��° �ּڰ��� �ȴ�
		func_b(arr, n, min); //���� �ּڰ��� �����Ͽ� ������ �ּڰ��� ã�´�.
	}
	answer = min;
	return answer;
}

void main() {
	int ans;
	int num[][4] = { {5,12,4,31}, {24,13,11,2},
	{43,44,19,26}, {33,65,20,21} };
	ans = solution(num, 4, 3); //3��°�� ������
	printf("%d", ans); //5
}