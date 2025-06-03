/*
파일명: assignment10.c
내용: 정수를 8진수(0), 10진수, 16진수(0x) 중 하나로 입력받아 각각 변환하여 출력하는 프로그램
작성자: 나현아
날짜: 2025.4.1
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printConvertedValues()
{
    int value;

    printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n");
    printf("정수? ");
    scanf("%i", &value);

    printf(" 8진수: %#o\n", value);
    printf("10진수: %d\n", value);
    printf("16진수: %#X\n", value);
}

int main()
{
    printConvertedValues();
    return 0;
}