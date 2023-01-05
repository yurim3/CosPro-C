#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 학교는 통학버스로 이 도로를 따라 왕복하여 학생들을 학교로 태워 데리고 오며 통학버스는 한 대이며 정원은 12명입니다. 
   이 통학버스는 정원을 초과하여 학생을 태울 수 없고, 모든 학생을 등교시킬 때까지 운행합니다. 
  모든 학생을 등교시키기 위해 통학버스는 몇 번을 왕복해야하는지를 확인하려고 합니다. */

int solution(int student[], int apts) {
	int result = 0;
	int total = 0;
	for (int i = 0; i < apts; i++) {
		total += student[i];
	}
	result = (total / 12); //12명씩 몇 번 실어서
	if (total % 12) { //12명 미만의 남는 학생들
		result++;
	}
	return result;
}

int main(void) {
	int student[] = { 12,3,4,4,12,8,9 };
	int result = solution(student, sizeof(student) / sizeof(student[0]));
	printf(" %d \n", result);
}
