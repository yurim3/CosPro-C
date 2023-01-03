#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int* func_a(int arr[], int arr_len) { //배열에 들어 있는 각 자연수의 개수를 셈
    int* counter = (int*)malloc(sizeof(int) * 1001); //int count[1001] 배열 생성
    for (int i = 0; i < 1001; i++)
        counter[i] = 0;
    for (int i = 0; i < arr_len; i++)
        counter[arr[i]]++; //전달받은 배열 속 자연수의 개수를 저장
    return counter;
}

int func_b(int arr[], int arr_len) { //배열 요소 중 가장 큰 값을 찾아 반환하는 함수
    int ret = 0;
    for (int i = 0; i < arr_len; i++) {
        if (ret < arr[i]) //arr 배열 [i]번 요소의 값이 ret값보다 크면
            ret = arr[i]; //ret 변수에 arr 배열 [i]번 요소의 값을 저장
    }
    return ret;
}

int func_c(int arr[], int arr_len) { //배열 요소 중 가장 작은 값을 찾아 반환s하는 함수
    const int INF = 1001; //의미 없는 코드
    int ret = INF; //INF 대신 1001로 적어도 되며, 자연수 최댓값
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] != 0 && ret > arr[i])
            //arr[i]이 0인 경우는 빈도가 0이므로, 해당 숫자는 제외시킨다
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
    printf("배수 %d", ans);
}