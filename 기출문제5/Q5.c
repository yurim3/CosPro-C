#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int solution(int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) {
		int current = i;
		while (current != 0) {
			if (current % 10 == 3 || current % 10 == 6 || current % 10 == 9) {
				//현재 넘어온 숫자값이 10으로 나눈 나머지가 3, 6, 9일 때
				count++; //3, 6, 9가 있으면 개수 증가
			}
			current /= 10; //10을 나눠서 자릿수를 줄임(자릿수마다 3, 6, 9가 있는지 확인해야 하니까)
		}
	}
	return count;
}

void main() {
	int ans;
	ans = solution(13); //13은 4번 침
	printf("%d", ans);
}