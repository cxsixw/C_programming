/*
파일명: assignment07.c
내용: 커피 사이즈(S, T, G)와 주문 수량을 입력받아서 출력하는 프로그램
작성자: 나현아
날짜: 2025.4.1
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void orderCoffee()
{
    char size;
    int quantity;

    printf("커피 사이즈(S, T, G)와 주문 수량? ");
    scanf(" %c %d", &size, &quantity);

    printf("%c 사이즈 %d잔을 주문합니다.\n", size, quantity);
}

int main()
{
    orderCoffee();
    return 0;
}