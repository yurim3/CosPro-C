#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* "��Ʈ����ũ" �� ���� ��ġ�� ���� ���
   "��" �� ���� ������ ��ġ�� �ٸ� ���
   ���� ��� 123 �� 345 �� �� ������ ���Ͽ� ��, ��, ���� �ڸ��� ������ ���� ����� "��Ʈ����ũ" 0 ��, "��" 1���Դϴ�. 
   �� �� ��
   1  2  3
   3  4  5
   >>���� ������ ��ġ�� �ٸ��Ƿ� "��"++;
*/

int* solution(int a, int b) {
	int* result = (int*)malloc(sizeof(int) * 2);
	int temp;
	result[0] = 0;
	result[1] = 0;
	for (int i = 0; i < 3; i++) {
		temp = b;
		for (int k = 0; k < 3; k++) {
			if (a % 10 == temp % 10) {
				if (i == k) result[0]++;
				else result[1]++;
			}
			temp /= 10;
		}
		a /= 10;
	}
	return result;
}

int main(void) {
	int* result = solution(356, 823);
	printf("Strike: %d, Ball: %d \n", result[0], result[1]);
}