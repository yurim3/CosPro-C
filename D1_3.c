#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	//1 >> �迭 ó��
		//�հ�
		//�հ�/�ּ�
	int a[10] = { 1, 2, -4, 56, 8, 89, 77, 23, 4, 22 };
	int max, maxpos;
	max = a[0]; //ù��° �迭��
	maxpos = 0; //���� ��ġ�� ����

	for (int i = 1; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
			maxpos = i;
		}
	}
	printf("�ִ밪: %d,  ��ҹ�ȣ: %d\n", max, maxpos);
}