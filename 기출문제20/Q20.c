#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* 자연수가 담겨 있는 n x 4 크기의 2차원 배열에서 k번째로 작은 수를 찾으려고 합니다. */
int func_a(int a[][4], int n) { //최솟값 구하는 함수	
	int min = 1001;
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (min > a[r][c]) {
				min = a[r][c];
			}
		}
	}
	return min;
}

int func_b(int a[][4], int n, int del) { //del: 제외를 시키고자 하는 값(최솟값)
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (del == a[r][c]) { //제외시키고자하는 값이면 값을 1001로 변경(최솟값이 될 수 없도록 아예 큰 값으로 변경)
				a[r][c] = 1001; // <-- 1001은 최솟값이 될 수 없다.
				return 1;
			}
		}
	}
	return 0;
}

int solution(int arr[][4], int n, int k) {
	int answer = 0;
	int min = 0;
	for (int i = 1; i <= k; i++) { //i 변수가 1이면 첫 번째 최솟값(가장 작은 값)
		min = func_a(arr, n); //i 변수가 k이면 k번째 최솟값이 된다
		func_b(arr, n, min); //현재 최솟값을 제외하여 다음번 최솟값을 찾는다.
	}
	answer = min;
	return answer;
}

void main() {
	int ans;
	int num[][4] = { {5,12,4,31}, {24,13,11,2},
	{43,44,19,26}, {33,65,20,21} };
	ans = solution(num, 4, 3); //3번째로 작은수
	printf("%d", ans); //5
}