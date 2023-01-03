#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
	//동적 메모리 할당 <stdlib.h> 헤더 추가
	int* pInt;
	pInt = (int*)malloc(sizeof(int)); //동적 메모리 할당

	*pInt = 4;
	printf("%d\n", pInt);

	free(pInt); //메모리 해제
}