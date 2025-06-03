/* 파일명: assignment17.c
 * 내용: 7, 15, 23, 31번 비트만 1인 32비트 값을 출력하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#include <stdio.h>

void printBitValues(void);

int main(void) {
    printBitValues();  // 비트 출력 함수 호출
    return 0;
}

/*
   함수명: printBitValues
   기능: 7, 15, 23, 31번째 비트만 1인 값을 16진수 및 10진수로 출력
   입력: 없음
   반환: 없음
*/

void printBitValues(void) {
    unsigned int bit7 = 1u << 7;   // 7번 비트만 1
    unsigned int bit15 = 1u << 15;  // 15번 비트만 1
    unsigned int bit23 = 1u << 23;  // 23번 비트만 1
    unsigned int bit31 = 1u << 31;  // 31번 비트만 1

    printf("7번 비트만 1인 값: %08X %u\n", bit7, bit7);
    printf("15번 비트만 1인 값: %08X %u\n", bit15, bit15);
    printf("23번 비트만 1인 값: %08X %u\n", bit23, bit23);
    printf("31번 비트만 1인 값: %08X %d\n", bit31, (int)bit31);  // 10진수는 부호 있는 정수로 출력
}