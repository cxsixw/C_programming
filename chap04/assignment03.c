/* 파일명: assignment03.c
 * 내용: 질량과 부피를 입력받아 밀도를 계산하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.4.15
 * 버전: v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calcDensity(double m, double v);  // 함수 원형

int assignment0403(void);

int main(void) {
    assignment0403();
    return 0;
}

int assignment0403(void) {
    double m = 0.0, v = 0.0;
    printf("질량(g)? ");
    scanf("%lf", &m);
    printf("부피(세제곱센티미터)? ");
    scanf("%lf", &v);

    printf("밀도: %lf\n", calcDensity(m, v));
    return 0;
}

double calcDensity(double m, double v) {
    return m / v;
}