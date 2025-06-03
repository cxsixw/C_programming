/*
파일명: assignment05.c
문제: 짝수와 홀수 개수를 계산하는 프로그램
작성자: 나현아
작성일: 2025-05-23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int n) {
    return n % 2 == 0;
}

int is_odd(int n) {
    return n % 2 != 0;
}

int main() {
    int num;
    int even_count = 0, odd_count = 0;

    printf("정수를 빈칸으로 구분해서 입력하세요. (마지막에 0 입력)\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        if (is_even(num))
            even_count++;
        else if (is_odd(num))
            odd_count++;
    }

    printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.\n", even_count, odd_count);

    return 0;
}