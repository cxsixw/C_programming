/*
���ϸ�: assignment06.c
����: PA06. �Ǽ��� �迭�� ���ҵ��� �������� ����� ���α׷�
�ۼ���: ������
��¥: 2025.05.31
����: v1.0
*/

#include <stdio.h>

#define SIZE 10

void PrintArray(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}

void ReverseArray(double arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        double temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    double arr[SIZE] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

    printf("�迭: ");
    PrintArray(arr, SIZE);

    ReverseArray(arr, SIZE);

    printf("����: ");
    PrintArray(arr, SIZE);

    return 0;
}