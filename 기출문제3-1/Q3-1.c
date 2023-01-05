#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 두 사람이 동시에 출발하여 일정한 속도로 걸어가려고 합니다.
   출발 이후 두 사람의 거리 차이가 10km 이상이 되는 시간을 분 단위로 구하려고 한다. */

double solution(int a, int b) {
	double answer = 0;
	int diff = (a < b) ? b-a : a-b; //a보다 b가 크면: b-a, a가 더 크면: a-b(음수로 나오지 않도록 하는 코드)
		answer = 10.0 / diff;
	return answer * 60;
}


int main(void) {
	int kim_speed = 10;
	int gun_speed = 13;
	double ret = solution(kim_speed, gun_speed);
	printf("%lf 분\n", ret);
}