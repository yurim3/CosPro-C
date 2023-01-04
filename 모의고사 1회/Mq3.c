#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int solution(int scores[], int scores_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++)
		if (0 <= scores[i] && scores[i] <= 200)
			count += 1;
	return count;
}

int main() {
	int scores[] = { 100,200,900,500,400,800 };
	int len = sizeof(scores) / sizeof(scores[0]);
	int result = solution(scores, len);
	printf("%d \n", result);
}