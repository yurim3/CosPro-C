#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* ���� ���� �湮�� ���� �� ��°�� ���� �湮�� ���� ���̸� ���Ϸ��� �մϴ�.  */

int* func_a(int arr[], int arr_size, int num) {
	int* ret = (int*)malloc(sizeof(int) * (arr_size - 1));
	int idx = 0;
	for (int i = 0; i < arr_size; ++i)
		if (arr[i] != num) // arr �迭���� num�� �����ϰ� ����
			ret[idx++] = arr[i];
	return ret;
}
int func_b(int a, int b) { // �� ���� ����(������ ���)�� ��ȯ�ϴ� �Լ�
	if (a >= b)
		return a - b;
	else
		return b - a;
}
int func_c(int arr[], int arr_size) { // arr �迭 ��� �� �ִ밪�� ��ȯ�ϴ� �Լ�
	int ret = -1;
	for (int i = 0; i < arr_size; ++i)
		if (ret < arr[i])
			ret = arr[i];
	return ret;
}

int solution(int visitor[], int n) {
	int max_first = func_c(visitor, n);// 1. ���� ���� �湮�� ��
	int* visitor_removed = func_a(visitor, n, max_first); // 2. 1���� ���ŵ� �迭
	int max_second = func_c(visitor_removed, n - 1);// 3. ���� ���� �湮�� ��
	int answer = func_b(max_first, max_second); // 4. ���� ���� ���� ���ϱ�
	return answer;
}

void main() {
	int ans;
	int v[] = { 4, 7, 2, 9, 3 };
	ans = solution(v, 5);
	printf("%d", ans); //2
}