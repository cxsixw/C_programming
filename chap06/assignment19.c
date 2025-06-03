/*
파일명: assignment19.c
문제: 수치 데이터와 스케일을 인자로 받아 그래프 출력, 0~9999 사이 임의 숫자 3개 생성 후 스케일 100으로 출력
작성자: 나현아
작성일: 2025-05-23
*/

#include <stdio.h>

void graph(int value, int scale) {
    int stars = value / scale;
    printf("%d ", value);
    for (int i = 0; i < stars; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    graph(6880, 100);
    graph(3052, 100);
    graph(5113, 100);
    return 0;
}