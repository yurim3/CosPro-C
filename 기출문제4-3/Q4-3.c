#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* �б��� ���й����� �� ���θ� ���� �պ��Ͽ� �л����� �б��� �¿� ������ ���� ���й����� �� ���̸� ������ 12���Դϴ�. 
   �� ���й����� ������ �ʰ��Ͽ� �л��� �¿� �� ����, ��� �л��� ���ų ������ �����մϴ�. 
  ��� �л��� ���Ű�� ���� ���й����� �� ���� �պ��ؾ��ϴ����� Ȯ���Ϸ��� �մϴ�. */

int solution(int student[], int apts) {
	int result = 0;
	int total = 0;
	for (int i = 0; i < apts; i++) {
		total += student[i];
	}
	result = (total / 12); //12�� �� �� �Ǿ
	if (total % 12) { //12�� �̸��� ���� �л���
		result++;
	}
	return result;
}

int main(void) {
	int student[] = { 12,3,4,4,12,8,9 };
	int result = solution(student, sizeof(student) / sizeof(student[0]));
	printf(" %d \n", result);
}
