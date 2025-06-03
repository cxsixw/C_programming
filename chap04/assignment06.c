/* 파일명: assignment06.c
 * 내용: 두 점의 좌표를 입력받아 직선의 기울기를 계산하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 함수 원형
void calcSlope(void);

int main(void) {
    calcSlope();  // 직선의 기울기 계산 함수 호출
    return 0;
}

/*
   함수명: calcSlope
   기능: 두 점의 좌표를 입력받아 직선의 기울기를 계산하여 출력
   입력: 없음
   반환: 없음
*/
void calcSlope(void) {
    int x1, y1, x2, y2;    // 두 점의 좌표
    double slope;          // 기울기

    // 좌표 입력
    printf("한 점의 좌표 (x1, y1)? ");
    scanf("%d %d", &x1, &y1);
    printf("또 다른 점의 좌표 (x2, y2)? ");
    scanf("%d %d", &x2, &y2);

    // 기울기 계산
    slope = (double)(y2 - y1) / (x2 - x1);

    // 결과 출력
    printf("직선의 기울기 : %f\n", slope);
}