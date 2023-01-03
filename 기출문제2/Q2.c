#include <stdio.h>
//문제 2: 두 날짜 차이

//func_a 함수 작성
int func_a(int month, int day) {
	int month_list[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //각 달별로 일수
	int total = 0; //총 일수
	for (int i = 0; i < month - 1; i++) { //month-1 = 2-1로, 1월까지 반복할 것임.
		total += month_list[i]; //전월까지의 일수
	}
	total += day; //나머지 일수 -> 2월 2일일 경우: 31 + 2 - 1 -> 32
	return total - 1;
}

//solution 함수 작성
int solution(int start_month, int start_day, int end_month, int end_day) {
	int start_total = func_a(start_month, start_day); //그달의 일수 구하기
	int end_total = func_a(end_month, end_day);
	return end_total - start_total;
}

//main

void main() {
	int ans;
	ans = solution(2, 10, 8, 6); //1월 2일 - 2월 2일 -> 일수
	/* 2월 10일: 1월 1일부터 41일
	   8월 6일: 1월 1일부터 일단 7월 31일까지 212, + 6 */
	printf("%d", ans);
}