#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	//�迭 ����� ũ�� �˾ƺ���
	int arr[10]; //�ڷ��� �迭��[ũ��] -> ���� �迭
	//�迭�� ũ���: sizeof(�迭��)
	printf("arr �迭�� ũ��: %d\n", sizeof(arr));
	printf("arr �迭 ����� ũ��: %d\n", sizeof(arr[0]));
	printf("arr �迭�� ����: %d\n", 10);

	//�迭�� ��� ���
	arr[1] = 7;
	printf("�迭 ����� ��: %d\n", arr[1]);

	//�迭 ���� ����� �κ� ����: ���ǽ��� �ۼ��� ����
	int i;
	for (i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}

	for (i = 0; i < 10; i++) {
		printf("arr[%d]: %d\n", i, arr[i]);
	}
}