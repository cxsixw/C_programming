/* 파일명: assignment12.c
 * 내용: 이동 거리와 예상 속력으로 도착 예정 소요 시간을 계산하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 함수 원형
void calculateArrivalTime(void);

int main(void) {
    calculateArrivalTime();  // 도착 예정 소요시간 계산 함수 호출
    return 0;
}

/*
   함수명: calculateArrivalTime
   기능: 이동 거리와 예상 속력을 입력받아 도착 예정 소요 시간을 계산하여 출력
   입력: 없음
   반환: 없음
*/

void calculateArrivalTime(void) {
    float distance, speed;  // 이동 거리(km), 예상 속력(km/h)
    int timeInMinutes;      // 예상 소요 시간(분)

    // 이동 거리와 예상 속력 입력 받기
    printf("이동 거리(km)? ");
    scanf("%f", &distance);
    printf("예상 속력(km/h)? ");
    scanf("%f", &speed);

    // 소요 시간 계산 (시간 = 거리 / 속력, 분으로 변환)
    timeInMinutes = (int)((distance / speed) * 60);

    // 결과 출력
    printf("도착까지 예상 소요 시간은 %d분입니다.\n", timeInMinutes);
}