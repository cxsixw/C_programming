/* 파일명: assignment04.c
 * 내용: 용매와 용질의 질량을 입력받아 퍼센트 농도를 계산하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 함수 원형
void calcPercent(void);

int main(void) {
    calcPercent();  // 퍼센트 농도 계산 함수 호출
    return 0;
}

/*
   함수명: calcPercent
   기능: 용매, 용질의 질량을 입력받고 퍼센트 농도를 계산하여 출력
   입력: 없음
   반환: 없음
*/

void calcPercent(void) {
    int solvent, solute;         // 용매와 용질의 질량 (g)
    double percent;              // 퍼센트 농도 (%)

    // 질량 입력
    printf("용매(g)? ");
    scanf("%d", &solvent);
    printf("용질(g)? ");
    scanf("%d", &solute);

    // 농도 계산 및 출력
    percent = (double)solute / (solvent + solute) * 100;
    printf("농도: %.2f %%\n", percent);
}