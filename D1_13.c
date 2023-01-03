#include <stdio.h>

//문제점1> 배열의 길이를 알아야지만 처리 가능
//문제점2> 함수 내부에 선언된 정적 배열은 종료되면 사용 못 함(지역 정적 배열)
//-> 해결점: 함수 내에서의 배열을 선언할 때에는 동적할당으로 배열 선언
int* solution() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//정적배열, 함수 내 사용 가능, 함수 밖에서 사용 못함(지역배열)
	return arr; //배열 리턴
}

int main() {
	int* result;
	result = solution();
	for (int i = 0; i < 10; i++) {
		printf("%d", result[i]);
	}
}
