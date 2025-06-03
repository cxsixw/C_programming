/* 파일명: assignment11.c
 * 내용: 제품의 가격과 할인율을 입력받아 할인가와 할인 금액을 계산하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 함수 원형
void calculateDiscount(void);

int main(void) {
    calculateDiscount();  // 할인 계산 함수 호출
    return 0;
}

/*
   함수명: calculateDiscount
   기능: 가격과 할인율을 입력받아 할인가와 할인 금액을 계산하여 출력
   입력: 없음
   반환: 없음
*/
void calculateDiscount(void) {
    int price, discountRate;   // 가격과 할인율
    int discountAmount, finalPrice;

    // 제품 가격과 할인율 입력 받기
    printf("제품의 가격? ");
    scanf("%d", &price);
    printf("할인율(%%)? ");
    scanf("%d", &discountRate);

    // 할인 금액 계산
    discountAmount = price * discountRate / 100;

    // 할인가 계산
    finalPrice = price - discountAmount;

    // 결과 출력
    printf("할인가: %d원 (%d원 할인)\n", finalPrice, discountAmount);
}