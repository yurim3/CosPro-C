#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int solution(int stones[], int stones_len) {
	int cnt = 0;
	int current = 0;
		while (current < stones_len) {
			current += stones[current];
			cnt++;
		}
	return cnt;
}

int main() {
	int stones[] = { 1,1,3,2,3,1 };
	int len = sizeof(stones) / sizeof(stones[0]);
	int result = solution(stones, len); //3
	printf("%d", result);
}