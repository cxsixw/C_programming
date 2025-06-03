/* 파일명: assignment17.c
 * 내용: 주차 시간을 입력받아 주차 요금을 계산하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.21
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 함수 원형
void calculateParkingFee(int parkingTime);

int main() {
    int parkingTime;

    // 주차 시간 입력
    printf("주차 시간(분)? ");
    scanf("%d", &parkingTime);

    // 주차 요금 계산 함수 호출
    calculateParkingFee(parkingTime);

    return 0;
}

// 주차 요금을 계산하는 함수
void calculateParkingFee(int parkingTime) {
    int fee = 2000;  // 최초 30분은 2000원
    int additionalTime = parkingTime - 30;  // 추가된 시간
    int additionalFee = 0;

    // 30분을 초과한 시간에 대해 계산
    if (additionalTime > 0) {
        additionalFee = (additionalTime / 10) * 1000;
    }

    // 총 요금 계산
    fee += additionalFee;

    // 하루 최대 요금은 25000원
    if (fee > 25000) {
        fee = 25000;
    }

    // 주차 요금 출력
    printf("주차 요금: %d원\n", fee);
}