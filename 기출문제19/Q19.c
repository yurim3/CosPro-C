#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* ���� ������ ���ǵ��� ���ݰ� ���� �ݾ��� �־����� ��, �Ž������� �󸶳� ��� �ϴ��� ���Ϸ��� �մϴ�. 
   ���� ��� ������ ���ǵ��� ������ {2100,3200,2100,800} �̶�� �� ���� �ݾ��� 8,200���Դϴ�. 
   �̶� ���� 10,000�� �����ߴٸ� 1,800���� �Ž��� �ָ� �˴ϴ�. */

int solution(int price[], int price_len, int money) {
	int answer = 0;
	//���1> ���ձ��ϱ� - ����
	/* int total = 0;
	for (int i = 0; i < price_len; i++) {
		total += price[i];
	}
	answer = money - total; */

	//���2> ���� �ݾ׿��� �ϳ��� ����
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