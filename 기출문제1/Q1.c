//기출 01
//문제:
//티셔츠 사이즈는 작은 순서대로 "XS", "S", "M", "L", "XL", "XXL"에서 작은 사이즈부터 순서대로 배열에 담아 리턴
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	answer = (int*)malloc(sizeof(int) * 6); //사이즈 종류
		//answer -> 각 셔츠 사이즈의 개수를 계산 -> 각 작은 사이즈별로 순서대로
		//배열에 담아 리턴
		
	//배열에 초깃값 설정
	for (int i = 0; i < 6; i++) {
		answer[i] = 0;
	}

	//요청한 사이즈 별로 비교하면서 개수 계산
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
	for (int i = 0; i < 6; i++) { //전달받은 배열 ans의 크기를 main에서 알 수 없음
		printf(" 요청 %3d\n", ans[i]);
	}
}