#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//매개변수가 2차원 배열로 되어있는 경우
int func_a(char(*p)[20], int n) { //p: 배열의 위치를 가리킬 포인터 변수, n: 배열의 길이
								  //n의 행의 크기
							      //char p[][20]
	for (int i = 0; i < n; i++) {
		printf("%s\n", p[i]); //5개 출력 -> %s로 문자배열을 한꺼번에 출력
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 20; j++) {
			printf("%c\n", p[i][j]); //-> for문으로 %c로 한 문자씩 출력
		}
	}
	return 0;
}

//함수에서 전달받은 문자배열을 메인에서 출력할 경우
int main() {
	char titles[5][20] = { "first", "second", "third", "four", "five" };
	func_a(titles, 5); //2차원 배열 전달
}