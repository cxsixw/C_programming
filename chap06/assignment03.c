/*
파일명: assignment03.c
문제: 두 점 사이의 직선 거리를 계산하는 프로그램
작성자: 나현아
작성일: 2025-05-23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1, y1, x2, y2;

    printf("직선의 시작점 좌표? ");
    scanf("%d %d", &x1, &y1);

    printf("직선의 끝점 좌표? ");
    scanf("%d %d", &x2, &y2);

    double result = distance(x1, y1, x2, y2);
    printf("(%d, %d)~(%d, %d) 직선의 길이: %f\n", x1, y1, x2, y2, result);

    return 0;
}