#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* �� ����� ���ÿ� ����Ͽ� ������ �ӵ��� �ɾ���� �մϴ�.
   ��� ���� �� ����� �Ÿ� ���̰� 10km �̻��� �Ǵ� �ð��� �� ������ ���Ϸ��� �Ѵ�. */

double solution(int a, int b) {
	double answer = 0;
	int diff = (a < b) ? b-a : a-b; //a���� b�� ũ��: b-a, a�� �� ũ��: a-b(������ ������ �ʵ��� �ϴ� �ڵ�)
		answer = 10.0 / diff;
	return answer * 60;
}


int main(void) {
	int kim_speed = 10;
	int gun_speed = 13;
	double ret = solution(kim_speed, gun_speed);
	printf("%lf ��\n", ret);
}