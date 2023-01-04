#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 고객이 구매한 물건들의 가격과 지불 금액이 주어졌을 때, 거스름돈을 얼마나 줘야 하는지 구하려고 합니다. 
   예를 들어 구매한 물건들의 가격이 {2100,3200,2100,800} 이라면 총 구매 금액은 8,200원입니다. 
   이때 고객이 10,000을 지불했다면 1,800원을 거슬러 주면 됩니다. */

int solution(int price[], int price_len, int money) {
	int answer = 0;
	//방법1> 총합구하기 - 빼기
	/* int total = 0;
	for (int i = 0; i < price_len; i++) {
		total += price[i];
	}
	answer = money - total; */

	//방법2> 지불 금액에서 하나씩 빼기
	for (int i = 0; i < price_len; i++) {
		money -= price[i];
	}
	answer = money;
	return answer;
}

void main() {
	int ans;
	int price[] = { 2100, 3200, 2100, 800 };
	ans = solution(price, 4, 8500);
	printf("%d", ans);
}