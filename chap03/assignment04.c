/* 파일명: assignment04.c
 * 내용: PA04. 물체에 적용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.4.3
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CalculateWork() {
    double force, distance, work;

    printf("힘(N)? ");
    scanf("%lf", &force);

    printf("이동거리(m)? ");
    scanf("%lf", &distance);

    work = force * distance;

    printf("일의 양: %.2lf J\n", work);
}

int main() {
    CalculateWork();
    return 0;
}