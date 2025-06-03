/* 파일명: assignment16.c
 * 내용: red, green, blue 값을 입력받아 RGB 트루컬러(24비트 색상)를 16진수로 출력하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void makeRGB(void);

int main(void) {
    makeRGB();  // RGB 색상 생성 함수 호출
    return 0;
}

/*
   함수명: makeRGB
   기능: red, green, blue 값을 입력받아 RGB 트루컬러를 생성하고 16진수로 출력
   입력: 없음
   반환: 없음
*/

void makeRGB(void) {
    int red, green, blue;
    unsigned int color = 0;

    // 1. red, green, blue 값 입력 받기
    printf("red? ");
    scanf("%d", &red);
    printf("green? ");
    scanf("%d", &green);
    printf("blue? ");
    scanf("%d", &blue);

    // 2. 비트 이동과 OR 연산으로 RGB 색상 생성 (24비트)
    color = (blue << 16) | (green << 8) | red;

    // 3. 16진수로 출력 (대문자, 6자리 고정)
    printf("RGB 트루컬러: %06X\n", color);
}