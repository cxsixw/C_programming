/* 파일명: assignment03.c
 * 내용: PA03. 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.4.3
 * 버전: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CalculatePotentialEnergy() {
    double mass, height, energy;
    const double g = 9.8;  // 중력 가속도 (m/s²)

    printf("질량(kg)? ");
    scanf("%lf", &mass);

    printf("높이(m)? ");
    scanf("%lf", &height);

    energy = mass * g * height;

    printf("위치에너지: %lf J\n", energy);
}

int main() {
    CalculatePotentialEnergy();
    return 0;
}