/* 파일명: assignment08.c
 * 내용: 비트 연산 계산기 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.21
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int num1, num2, result;
    char operator;

    // 비트 연산식 입력 받기
    printf("비트 연산식? ");
    scanf("%x %c %x", &num1, &operator, &num2);  // 입력을 16진수로 받음

    // 연산 수행
    switch (operator) {
    case '&':
        result = num1 & num2;
        break;
    case '|':
        result = num1 | num2;
        break;
    case '^':
        result = num1 ^ num2;
        break;
    default:
        printf("잘못된 연산자입니다.\n");
        return 1;
    }

    // 결과 출력
    printf("%X %c %X = %X\n", num1, operator, num2, result);

    return 0;
}