#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
/* 각 친구들이 칠을 하는 속도가 달라서 같은 크기의 벽을 A는 1시간, B는 2시간, C는 4시간이 걸립니다. 
   A, B, C 세 사람이 함께 이 집을 칠하는 몇 시간이 걸리는지 알아보려 합니다. */

int solution(int walls) {
	int answer = 0;
	int painted_walls = 0;
	int i;
	for (i = 1; painted_walls < walls; i++) {
		painted_walls = (i) + (i/2) + (i/4);
		printf("% 시간 후 % 개의 벽을 칠함\n", i, painted_walls);
	}
	answer = i - 1; //for문에서 i++ 후 종료되기 때문에(answer = i;로 하면 시간+1로 나오기 때문에 안 됨)
	return answer;
}

int main(void) {
	int walls = 5;
	int ret = solution(walls);
	printf("%d \n", ret);
}