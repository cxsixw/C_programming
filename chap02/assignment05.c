/*
파일명: assignment05.c
내용: 몸무게를 입력받아서 출력하는 프로그램
작성자: 나현아
날짜: 2025.4.1
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printWeight()
{
    float weight;

    printf("몸무게? ");
    scanf("%f", &weight);

    printf("입력한 몸무게는 %.2fKG입니다.\n", weight);
}

int main()
{
    printWeight();
    return 0;
}