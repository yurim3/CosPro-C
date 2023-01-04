#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int solution(int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) {
		int current = i;
			while (current != 0) {
				if (current % 10 == 3 || current % 10 == 6 || current % 10 == 9) {
					count++; //3 6 9일 때 count++
				}
				current /= 10; //자릿수 바꾸는 코드(일의 자리면 자릿수를 줄일 필요 없음)
			}
		return count;
	}