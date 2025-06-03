/*
파일명: assignment06.c
내용: PA06. 실수형 배열의 원소들을 역순으로 만드는 프로그램
작성자: 나현아
날짜: 2025.05.31
버전: v1.0
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

    printf("배열: ");
    PrintArray(arr, SIZE);

    ReverseArray(arr, SIZE);

    printf("역순: ");
    PrintArray(arr, SIZE);

    return 0;
}