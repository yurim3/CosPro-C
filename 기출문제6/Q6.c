#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int* func_a(int arr[], int arr_len) { //�迭�� ��� �ִ� �� �ڿ����� ������ ��
    int* counter = (int*)malloc(sizeof(int) * 1001); //int count[1001] �迭 ����
    for (int i = 0; i < 1001; i++)
        counter[i] = 0;
    for (int i = 0; i < arr_len; i++)
        counter[arr[i]]++; //���޹��� �迭 �� �ڿ����� ������ ����
    return counter;
}

int func_b(int arr[], int arr_len) { //�迭 ��� �� ���� ū ���� ã�� ��ȯ�ϴ� �Լ�
    int ret = 0;
    for (int i = 0; i < arr_len; i++) {
        if (ret < arr[i]) //arr �迭 [i]�� ����� ���� ret������ ũ��
            ret = arr[i]; //ret ������ arr �迭 [i]�� ����� ���� ����
    }
    return ret;
}

int func_c(int arr[], int arr_len) { //�迭 ��� �� ���� ���� ���� ã�� ��ȯs�ϴ� �Լ�
    const int INF = 1001; //�ǹ� ���� �ڵ�
    int ret = INF; //INF ��� 1001�� ��� �Ǹ�, �ڿ��� �ִ�
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] != 0 && ret > arr[i])
            //arr[i]�� 0�� ���� �󵵰� 0�̹Ƿ�, �ش� ���ڴ� ���ܽ�Ų��
            ret = arr[i];
    }
    return ret;
}

int solution(int arr[], int arr_len) {
    int* counter = func_a(arr, arr_len);
    int max_cnt = func_b(counter, arr_len);
    int min_cnt = func_c(counter, arr_len);
    return max_cnt / min_cnt;
}

void main() {
    int ans;
    int arr[12] = { 1, 2, 2, 1, 1, 1, 1, 1, 1, 1};
    ans = solution(arr, 12);
    printf("��� %d", ans);
}