#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int solution(int stones[], int stones_len) {
	int cnt = 0; //�̵� Ƚ�� -> ī����
	int current = 0; //���� ��ġ
	while (current < stones_len) { //0 < 76 
		current += stones[current]; //�̵��Ÿ� current = 0+2 -> 2
		cnt++;
	}
	return cnt;
}

void main(){
	int stones[] = { 1, 5, 1, 3, 2, 1 };
	int ans = solution(stones, 6);
	printf("%d", ans);
}
