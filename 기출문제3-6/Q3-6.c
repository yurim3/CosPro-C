#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* ���ڿ����� ������ �����Ͽ� ������ ����ϴ� ���α׷��� ������� �մϴ�. 
   ���� ��� ��korean world cup 2018. olympic stadium 10, 11 pm 1."�� ���ڿ����� ������ 2018, 10, 11, 1 �̸�
   �̵��� ������ 2040 �Դϴ�. */

int solution(char string[]) {
	int answer = 0;
	int number = 0;
	for (int i = 0; string[i] != 0; ++i) {
		if ('0' <= string[i] && string[i] <= '9') {
			number = number * 10 + (string[i] - 48);
		}
		else {
			answer += number;
			number = 0;
		}
	}
	return answer;
}

int main(void) {
	char string[] = "korea 2005. 08. 26. pm 1731.";
	int result = solution(string);
	printf("%d \n", result);
}