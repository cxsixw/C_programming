/* 파일명: assignment06.c
 * 내용: PA06. 아파트의 면적을 제곱미터(㎡)로 입력받아 몇 평인지 출력하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.4.3
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SQM_TO_PYEONG 0.3025

void ConvertArea() {
    double sqm, pyeong;

    printf("아파트의 면적(제곱미터)? ");
    scanf("%lf", &sqm);

    pyeong = sqm * SQM_TO_PYEONG;

    printf("%.2lf 제곱미터 = %.2lf 평\n", sqm, pyeong);
}

int main() {
    ConvertArea();
    return 0;
}