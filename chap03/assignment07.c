/* 파일명: assignment07.c
 * 내용: PA07. 아파트의 면적을 제곱미터(㎡)로 입력받아 몇 평인지 출력하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.4.3
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CalculateExponent() {
    double number, square, cube;

    printf("실수?");
    scanf("%lf", &number);

    square = number * number;
    cube = number * number * number;

    printf("제곱: %e\n", square);
    printf("세제곱: %e\n", cube);
}

int main() {
    CalculateExponent();
    return 0;
}