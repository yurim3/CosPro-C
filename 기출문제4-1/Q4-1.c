#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 9�� ī�� �� 3���� ī�带 ��� ���� ������ ���� Ȧ���� ��찡 �� �������� �˾Ƴ����� �մϴ�. 
   ���� ��� �ټ� ���� ī�尡 (7, 5, 6, 4, 9)�� ��� ������ ������� ������ �� �ִ� ���� �Ʒ��� �����ϴ�.
   [7 5 6], [7 5 4], [7 5 9]. [7 6 4], [7 6 9], [7 4 9]
   [5 6 4], [5 6 9], [5 4 9]
   [6 4 9]
>>[7, 4, 9] �� ��� ���� 20 �� �ǰ�, [7, 6, 4] �� ��� ���� 17�� �˴ϴ� */

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
