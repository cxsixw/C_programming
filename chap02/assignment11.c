/*
파일명: assignment11.c
내용: 파이 값(3.14159265)을 소수점 이하 2, 4, 6, 8자리 및 지수 표기로 출력하는 프로그램
작성자: 나현아
날짜: 2025.4.1
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printPiFormats()
{
    double pi = 3.14159265;

    printf("pi = %.2f\n", pi);
    printf("pi = %.4f\n", pi);
    printf("pi = %.6f\n", pi);
    printf("pi = %.8f\n", pi);
    printf("pi = %.6e\n", pi);
}

int main()
{
    printPiFormats();
    return 0;
}