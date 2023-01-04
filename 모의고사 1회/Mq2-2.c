#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 선택할 수 있는 축구화 사이즈는 작은 순서대로 "7", "7.5", "8", "8.5", "9", "9.5" 총 6종류가 있습니다. */
int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer = (int*)malloc(sizeof(int) * shirt_size_len); // 동적할당
	for (int i = 0; i < 6; i++) answer[i] = 0;
	for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i], "7") == 0) answer[0]++;
		if (strcmp(shirt_size[i], "7.5") == 0) answer[1]++;
		if (strcmp(shirt_size[i], "8") == 0) answer[2]++;
		if (strcmp(shirt_size[i], "8.5") == 0) answer[3]++;
		if (strcmp(shirt_size[i], "9") == 0) answer[4]++;
		if (strcmp(shirt_size[i], "9.5") == 0) answer[5]++;
	}
	return answer;
}


int main(void) {
	char* shirtsize[] = { "7", "6", "9", "9", "7", "6", "9", "9" };
	int len = sizeof(shirtsize) / sizeof(shirtsize[0]);
	int* result = solution(shirtsize, len);
	for (int i = 0; i < 6; i++) {
		printf("%d ", result[i]);
	}
	printf("\n");
	return 0;
}