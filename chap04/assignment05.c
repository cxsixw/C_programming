/* 파일명: assignment05.c
 * 내용: 반지름과 높이를 입력받아 원기둥의 부피를 계산하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 상수 정의
#define PI 3.141592

// 함수 원형
void calcCylinderVolume(void);

int main(void) {
    calcCylinderVolume();  // 원기둥 부피 계산 함수 호출
    return 0;
}

/*
   함수명: calcCylinderVolume
   기능: 반지름과 높이를 입력받고 원기둥의 부피를 계산하여 출력
   입력: 없음
   반환: 없음
*/
void calcCylinderVolume(void) {
    int r, h;            // 반지름, 높이 (정수)
    double volume;       // 부피 (실수)

    // 입력
    printf("반지름의 길이? ");
    scanf("%d", &r);
    printf("높이 ");
    scanf("%d", &h);

    // 부피 계산: π × r² × h
    volume = PI * r * r * h;

    // 출력
    printf("원기둥의 부피: %f\n", volume);
}