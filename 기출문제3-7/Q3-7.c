#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* "스트라이크" 는 값과 위치가 같은 경우
   "볼" 은 값은 같으나 위치가 다른 경우
   예를 들어 123 과 345 인 두 정수를 비교하여 백, 십, 일의 자리로 나누어 비교한 결과는 "스트라이크" 0 개, "볼" 1개입니다. 
   백 십 일
   1  2  3
   3  4  5
   >>값은 같으나 위치가 다르므로 "볼"++;
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