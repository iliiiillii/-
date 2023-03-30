#include <stdio.h>

// 배열 arr에서 가장 큰 값을 찾아 반환하는 함수
int findmaxnumber(int arr[], int n) {
    int max = arr[0]; // 가장 큰 값은 일단 첫 번째 요소로 설정
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) { // 현재 요소가 기존 최대값보다 크면
            max = arr[i]; // 최대값을 현재 요소로 업데이트
        }
    }
    return max;
}

int main() {
    int arr[] = { 1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]); // 배열 arr의 크기 계산
    int max = findmaxnumber(arr, n); // 배열 arr에서 가장 큰 값을 찾음
    printf("The maximum number is %d", max); // 결과 출력
    return 0;
}
