#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	//다차원 배열
	int arr1[3][4] = { 1, 2, 3, 4, 5, 6,7,8, 9, 10, 11, 12 };
	int k, l;
	for (k = 0; k < 3; k++) {
		for (l = 0; l < 4; l++) {
			printf("%d", arr1[k][l]);
		}
		printf("\n");
	}

	//배열의 크기
	printf("arr1의 크기: %d\n", sizeof(arr1)); //2차원 배열의 크기
	printf("arr1[0]의 크기: %d\n", sizeof(arr1[0])); //1차원 배열의 크기
	printf("arr1[2][3]의 크기: %d\n", sizeof(arr1[2][3])); //2행 3열의 크기	
}