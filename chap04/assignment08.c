/* 파일명: assignment08.c
 * 내용: 반지름을 입력받아 구의 부피를 계산하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 상수 정의
#define PI 3.141592

// 함수 원형
void calcSphereVolume(void);

int main(void) {
    calcSphereVolume();  // 구의 부피 계산 함수 호출
    return 0;
}

/*
   함수명: calcSphereVolume
   기능: 반지름을 입력받고 구의 부피를 계산하여 출력
   입력: 없음
   반환: 없음
*/

void calcSphereVolume(void) {
    int r;            // 반지름 (정수형)
    double volume;    // 구의 부피 (실수형)

    // 반지름 입력
    printf("반지름의 길이? ");
    scanf("%d", &r);

    // 구의 부피 계산: (4/3) * π * r³
    volume = (4.0 / 3.0) * PI * r * r * r;

    // 부피 출력
    printf("구의 부피: %f\n", volume);
}