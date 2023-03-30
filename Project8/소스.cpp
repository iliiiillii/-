#include <stdio.h>

// �迭 arr���� ���� ū ���� ã�� ��ȯ�ϴ� �Լ�
int findmaxnumber(int arr[], int n) {
    int max = arr[0]; // ���� ū ���� �ϴ� ù ��° ��ҷ� ����
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) { // ���� ��Ұ� ���� �ִ밪���� ũ��
            max = arr[i]; // �ִ밪�� ���� ��ҷ� ������Ʈ
        }
    }
    return max;
}

int main() {
    int arr[] = { 1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]); // �迭 arr�� ũ�� ���
    int max = findmaxnumber(arr, n); // �迭 arr���� ���� ū ���� ã��
    printf("The maximum number is %d", max); // ��� ���
    return 0;
}