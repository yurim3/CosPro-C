#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* �л����� �̸��� ��� �ִ� ��ܿ��� �̸��� j �Ǵ� k�� ��� ���� �л��� ���� ���Ϸ��� �մϴ� */
int solution(char* name_list[], int name_list_len) {
	int answer = 0;
	for (int i = 0; i < name_list_len; ++i) //�迭 ���̸�ŭ �ݺ�(4��)
		for (int j = 0; name_list[i][j] != 0; ++j) //i��°�� j�� ����
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