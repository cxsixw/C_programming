/*
파일명: assignment01.c
문제: 가로와 세로의 길이를 받아 직사각형의 둘레를 계산하는 프로그램
작성자: 나현아
작성일: 2025-05-23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int width, int height) {
    return 2 * (width + height);
}

int main() {
    int width, height;

    printf("가로? ");
    scanf("%d", &width);

    printf("세로? ");
    scanf("%d", &height);

    int perimeter = get_perimeter(width, height);
    printf("직사각형의 둘레: %d\n", perimeter);

    return 0;
}