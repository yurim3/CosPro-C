#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	//������ ����
	int number = 5;
	int* ptr = &number; //number ������ �ּҰ��� ����Ŵ
	//*ptr = 10; //�����ͺ����� ���� ������� �� �� ����
	printf("number�� ��: %d\n", number);
	*ptr = *ptr + 5;
	printf("number�� ��: %d\n", number); //�����Ͱ� ����Ű�� �ִ� ���� ������ ����

	//������ ������ ũ��
	//-> sizeof(������ ����): �ּҰ� ũ��
	//sizeof(*������ ����): ������ ������ ����Ű�� �ִ� ����� �ڷ���

	//�������� ǥ���� �迭 ǥ��
	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* pArr;
	int o;
	pArr = &arr2[0];
	for (o = 0; o < 10; o++) {
		printf("%p: %d\n", &arr2[o], arr2[o]);
	}

	for (o = 0; o < 10; o++) {
		printf("%p: %d\n", pArr + o, *(pArr + o));
		//�����ͺ���+��ġ: ��ġ�� �ش��ϴ� �ּҰ�
		//*(�����ͺ���+��ġ): ��ġ�� �ش��ϴ� ���� ����
	}

	//������ �迭: ������ �������� �迭
	char* pStr[4] = { "red", "green", "blue", "gray" };
	printf("0�� ���ڿ� ��: %s\n", pStr[0]);
	printf("1�� ���ڿ� ��: %s\n", pStr[1]);
}