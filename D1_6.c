#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
	//���� �޸� �Ҵ� <stdlib.h> ��� �߰�
	int* pInt;
	pInt = (int*)malloc(sizeof(int)); //���� �޸� �Ҵ�

	*pInt = 4;
	printf("%d\n", pInt);

	free(pInt); //�޸� ����
}