#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	//�迭�� ã�� -> if(ã�����ϴ� Ű == �迭��[��ġ])

	//�迭�� ���� -> ������迭��[] = ��������迭��
	int c[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int d[10];
	for (int m = 0; m < 10; m++) {
		d[m] = c[m];
	}

	//���ڿ� -> ���ڿ� ���� null�� ����
	//���ڿ� ó�� �Լ�: 
	//2> ���ڿ� ����: strlen
	//3> ���ڿ� ����: strcopy
	//4> ���ڿ� ��: strcmp
	//5> ���ڿ� ����: strconcat

	char s1[100] = "���ѹα� ������";
	char s2[100];
	char s3[100];

	printf("���ڿ� ����: %d\n", strlen(s1));
	strcpy(s2, s1);
	printf("%s\n", s2);

	strcat(s2, s1); //s1+s2
	printf("%s\n", s2);

	printf("%d\n", strcmp("school", "boy")); //������: 0, �ٸ���: 0�� �ƴ� ��
											//string1 < string2: -1, �ݴ�: +1
}