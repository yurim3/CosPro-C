#include <stdio.h>

//매개변수로 배열을 전달할 경우 배열의 길이도 같이 넘겨야 함
int solution(int* p, int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", p[i]);
	}
	return 0;
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	solution(arr, 10);
}