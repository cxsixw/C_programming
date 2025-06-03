/*
파일명: assignment09.c
내용: 16진수 정수를 입력받아 10진수로 출력하는 프로그램
작성자: 나현아
날짜: 2025.4.1
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void convertHexToDecimal()
{
    int hexValue;

    printf("16진수 정수? ");
    scanf("%x", &hexValue);

    printf("16진수 %X는 10진수로 %d입니다.\n", hexValue, hexValue);
}

int main()
{
    convertHexToDecimal();
    return 0;
}