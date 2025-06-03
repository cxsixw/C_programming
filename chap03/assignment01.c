/* 파일명: assignment01.c
 * 내용: PA01. 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.4.3
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CalculateSquare() {
    int side;

    printf("한 변의 길이를 입력하세요: ");
    scanf("%d", &side);

    printf("\n=== 정사각형 정보 ===\n");
    printf("넓이: %d\n", side * side);
    printf("둘레: %d\n", 4 * side);
}

int main() {
    CalculateSquare();  // 함수 호출
    return 0;
}