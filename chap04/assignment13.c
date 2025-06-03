/* 파일명: assignment13.c
 * 내용: 두 점의 좌표를 입력받아 직선의 길이를 구하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>  // sqrt() 함수를 사용하기 위해 math.h 포함

 // 함수 원형
void calculateLineLength(void);

int main(void) {
    calculateLineLength();  // 직선의 길이 계산 함수 호출
    return 0;
}

/*
   함수명: calculateLineLength
   기능: 직선의 시작점과 끝점 좌표를 입력받아 직선의 길이를 계산하여 출력
   입력: 없음
   반환: 없음
*/
void calculateLineLength(void) {
    int x1, y1, x2, y2;  // 직선의 시작점(x1, y1)과 끝점(x2, y2) 좌표
    double length;        // 직선의 길이

    // 시작점과 끝점 좌표 입력 받기
    printf("직선의 시작점 (X1, y1)? ");
    scanf("%d %d", &x1, &y1);
    printf("직선의 끝점 (x2, Y2)? ");
    scanf("%d %d", &x2, &y2);

    // 피타고라스 정리 적용하여 직선의 길이 계산
    length = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // 결과 출력
    printf("직선의 길이: %f\n", length);
}