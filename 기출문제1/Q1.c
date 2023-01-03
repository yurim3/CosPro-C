//���� 01
//����:
//Ƽ���� ������� ���� ������� "XS", "S", "M", "L", "XL", "XXL"���� ���� ��������� ������� �迭�� ��� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	answer = (int*)malloc(sizeof(int) * 6); //������ ����
		//answer -> �� ���� �������� ������ ��� -> �� ���� ������� �������
		//�迭�� ��� ����
		
	//�迭�� �ʱ갪 ����
	for (int i = 0; i < 6; i++) {
		answer[i] = 0;
	}

	//��û�� ������ ���� ���ϸ鼭 ���� ���
	for(int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i], "XS") == 0) {
			answer[0]++;
		}
		else if (strcmp(shirt_size[i], "S") == 0) {
			answer[1]++;
		}
		else if (strcmp(shirt_size[i], "M") == 0) {
			answer[2]++;
		}
		else if (strcmp(shirt_size[i], "L") == 0) {
			answer[3]++;
		}
		else if (strcmp(shirt_size[i], "XL") == 0) {
			answer[4]++;
		}
		else if (strcmp(shirt_size[i], "XXL") == 0) {
			answer[5]++;
		}
	}

	return answer;
}

void main() {
	int* ans;
	int size;
	char* shirtsize[] = {"XS", "M", "M", "L", "XL"};
	size = sizeof(shirtsize) / sizeof(shirtsize[0]);
	ans = solution(shirtsize, size);
	for (int i = 0; i < 6; i++) { //���޹��� �迭 ans�� ũ�⸦ main���� �� �� ����
		printf(" ��û %3d\n", ans[i]);
	}
}