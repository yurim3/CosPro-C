#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
/* �� ģ������ ĥ�� �ϴ� �ӵ��� �޶� ���� ũ���� ���� A�� 1�ð�, B�� 2�ð�, C�� 4�ð��� �ɸ��ϴ�. 
   A, B, C �� ����� �Բ� �� ���� ĥ�ϴ� �� �ð��� �ɸ����� �˾ƺ��� �մϴ�. */

int solution(int walls) {
	int answer = 0;
	int painted_walls = 0;
	int i;
	for (i = 1; painted_walls < walls; i++) {
		painted_walls = (i) + (i/2) + (i/4);
		printf("% �ð� �� % ���� ���� ĥ��\n", i, painted_walls);
	}
	answer = i - 1; //for������ i++ �� ����Ǳ� ������(answer = i;�� �ϸ� �ð�+1�� ������ ������ �� ��)
	return answer;
}

int main(void) {
	int walls = 5;
	int ret = solution(walls);
	printf("%d \n", ret);
}