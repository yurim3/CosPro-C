#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 학생들의 이름이 들어 있는 명단에서 이름에 j 또는 k가 들어 가는 학생의 수를 구하려고 합니다 */
int solution(char* name_list[], int name_list_len) {
	int answer = 0;
	for (int i = 0; i < name_list_len; ++i) //배열 길이만큼 반복(4번)
		for (int j = 0; name_list[i][j] != 0; ++j) //i번째의 j번 문자
			if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
				answer++;
				break;
			}
	return answer;
}

void main() {
	int ans;
	char* names[] = { "lames", "luke", "oliver", "jack" };
	ans = solution(names, 4);
	printf("%d", ans);
}