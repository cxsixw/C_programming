/* 파일명: assignment07.c
 * 내용: 직각삼각형에서 밑변과 높이를 입력받아 빗변의 길이를 계산하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>  // sqrt 함수 사용을 위해 포함

 // 함수 원형
void calcHypotenuse(void);

int main(void) {
    calcHypotenuse();  // 빗변 계산 함수 호출
    return 0;
}

/*
   함수명: calcHypotenuse
   기능: 밑변과 높이를 입력받아 피타고라스 정리로 빗변 계산 후 출력
   입력: 없음
   반환: 없음
*/

void calcHypotenuse(void) {
    int a, b;           // 밑변과 높이 (정수형)
    double c;           // 빗변 (실수형)

    // 입력
    printf("밑변? ");
    scanf("%d", &a);
    printf("높이? ");
    scanf("%d", &b);

    // 피타고라스 정리: c = √(a² + b²)
    c = sqrt((double)(a * a + b * b));

    // 출력
    printf("빗의 길이 %f\n", c);
}