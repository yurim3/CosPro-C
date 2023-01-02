#include <stdio.h>
#include <string.h>

void main() {
	//�迭 ����� ũ�� �˾ƺ���
	int arr[10]; //�ڷ��� �迭��[ũ��] -> ���� �迭
	//�迭�� ũ���: sizeof(�迭��)
	printf("arr �迭�� ũ��: %d\n", sizeof(arr));
	printf("arr �迭 ����� ũ��: %d\n", sizeof(arr[0]));
	printf("arr �迭�� ����: %d\n", 10);

	//�迭�� ��� ���
	arr[1] = 7;
	printf("�迭 ����� ��: %d\n", arr[1]);

	//�迭 ���� ����� �κ� ����: ���ǽ��� �ۼ��� ����
	int i;
	for (i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}

	for (i = 0; i < 10; i++) {
		printf("arr[%d]: %d\n", i, arr[i]);
	}

	//������ �迭
	int arr1[3][4] = { 1, 2, 3, 4, 5, 6,7,8, 9, 10, 11, 12 };
	int k, l;
	for (k = 0; k < 3; k++) {
		for (l = 0; l < 4; l++) {
			printf("%d", arr1[k][l]);
		}
		printf("\n");
	}

	//�迭�� ũ��
	printf("arr1�� ũ��: %d\n", sizeof(arr1)); //2���� �迭�� ũ��
	printf("arr1[0]�� ũ��: %d\n", sizeof(arr1[0])); //1���� �迭�� ũ��
	printf("arr1[2][3]�� ũ��: %d\n", sizeof(arr1[2][3])); //2�� 3���� ũ��	

	//1 >> �迭 ó��
		//�հ�
		//�հ�/�ּ�
	int a[10] = { 1, 2, -4, 56, 8, 89, 77, 23, 4, 22 };
	int max, maxpos;
	max = a[0]; //ù��° �迭��
	maxpos = 0; //���� ��ġ�� ����

	for (int i = 1; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
			maxpos = i;
		}
	}
	printf("�ִ밪: %d, 	��ҹ�ȣ: %d\n", max, maxpos);

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

	//������ ����
	int number = 5;
	int* ptr = &number; //number ������ �ּҰ��� ����Ŵ
	//*ptr = 10; //�����ͺ����� ���� ������� �� �� ����
	printf("number�� ��: %d\n", number);
}