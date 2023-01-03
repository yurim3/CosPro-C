#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	//배열값 찾기 -> if(찾고자하는 키 == 배열명[위치])

	//배열의 복사 -> 복사대상배열명[] = 복사원본배열명
	int c[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int d[10];
	for (int m = 0; m < 10; m++) {
		d[m] = c[m];
	}

	//문자열 -> 문자열 끝에 null값 들어옴
	//문자열 처리 함수: 
	//2> 문자열 길이: strlen
	//3> 문자열 복사: strcopy
	//4> 문자열 비교: strcmp
	//5> 문자열 결합: strconcat

	char s1[100] = "대한민국 파이팅";
	char s2[100];
	char s3[100];

	printf("문자열 길이: %d\n", strlen(s1));
	strcpy(s2, s1);
	printf("%s\n", s2);

	strcat(s2, s1); //s1+s2
	printf("%s\n", s2);

	printf("%d\n", strcmp("school", "boy")); //같으면: 0, 다르면: 0이 아닌 값
											//string1 < string2: -1, 반대: +1
}