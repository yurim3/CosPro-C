#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int solution(int price, char* grade) {
	int answer = 0;
	if (strcmp(grade, "S") == 0) { //°°´Ù¸é
		answer = price * 0.95;
	}
	else if (strcmp(grade, "G") == 0) {
		answer = price * 0.90;
	}
	else if (strcmp(grade, "V") == 0) {
		answer = price * 0.85;
	}
	return answer;
}

int main() {
	int price = 10000;
	char* grade = "G";
	int result = solution(price, grade);
	printf("%d \n", result);
}