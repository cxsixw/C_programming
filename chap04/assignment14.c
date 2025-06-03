/* 파일명: assignment14.c
 * 내용: 기본 요금과 월 사용량을 입력받아 전기 요금을 계산하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 함수 원형
void calculateElectricBill(void);

int main(void) {
    calculateElectricBill();  // 전기 요금 계산 함수 호출
    return 0;
}

/*
   함수명: calculateElectricBill
   기능: 기본 요금과 월 사용량을 입력받아 전기 요금을 계산하여 출력
   입력: 없음
   반환: 없음
*/

void calculateElectricBill(void) {
    int baseFee, usage;       // 기본 요금과 월 사용량
    int totalBill;            // 전기 요금

    // 기본 요금과 월 사용량 입력 받기
    printf("기본 요금? ");
    scanf("%d", &baseFee);
    printf("월 사용량(kWh)? ");
    scanf("%d", &usage);

    // 전기 요금 계산 (기본 요금 + 사용량 * 190)
    totalBill = baseFee + usage * 190;

    // 결과 출력
    printf("전기 요금: %d원\n", totalBill);
}