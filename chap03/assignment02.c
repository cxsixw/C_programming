/* 파일명: assignment02.c
 * 내용: PA02. 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.4.3
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CalculateRectangle() {
    int width, height;

    printf("가로의 길이? ");
    scanf("%d", &width);

    printf("세로의 길이? ");
    scanf("%d", &height);

    printf("직사각형의 넓이: %d\n", width * height);
    printf("직사각형의 둘레: %d\n", 2 * (width + height));
}

int main() {
    CalculateRectangle();  // 함수 호출
    return 0;
}