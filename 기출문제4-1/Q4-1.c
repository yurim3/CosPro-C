#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 9장 카드 중 3장의 카드를 골라 적힌 숫자의 합이 홀수인 경우가 몇 번인지를 알아내려고 합니다. 
   예를 들어 다섯 장의 카드가 (7, 5, 6, 4, 9)인 경우 순서에 관계없이 조합할 수 있는 경우는 아래와 같습니다.
   [7 5 6], [7 5 4], [7 5 9]. [7 6 4], [7 6 9], [7 4 9]
   [5 6 4], [5 6 9], [5 4 9]
   [6 4 9]
>>[7, 4, 9] 의 경우 합은 20 이 되고, [7, 6, 4] 의 경우 합은 17이 됩니다 */

int solution(int cards[]) {
	int answer = 0;
	for (int i = 0; i < 5; i++)
		for (int k = i; k < 5; k++)
			for (int m = k+1; m < 5; m++) {
				printf("[%d %d %d] = %d\n", cards[i], cards[k], cards[m],
					(cards[i] + cards[k] + cards[m]));
				if ((cards[i] + cards[k] + cards[m]) )
					answer++;
			}
	return answer;
}

int main(void) {
	int cards[5] = { 7,5,6,4,9 };
	int result = solution(cards);
	printf(" %d \n", result);
	return 0;
}
