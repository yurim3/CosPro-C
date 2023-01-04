#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int solution(int price[], int price_len, int money) {
	int answer = 0;
	for (int i = 0; i < price_len; i++) {
		answer += price[i];
	}
	answer = money - answer;
	return answer;
}

void main() {
	int price[] = { 1000,1200,800,500,2000 };
	int len = sizeof(price) / sizeof(price[0]);
	int money = 5600;
	int result = solution(price, len, money);
	printf("%d \n", result);
	return 0;
}