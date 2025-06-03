/* 파일명: assignment10.c
 * 내용: 비행 소요시간을 실수로 입력받아 일, 시간, 분으로 변환하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 함수 원형
void convertFlightTime(void);

int main(void) {
    convertFlightTime();  // 소요시간 변환 함수 호출
    return 0;
}

/*
   함수명: convertFlightTime
   기능: 소요시간(시간)을 실수로 입력받아 일, 시간, 분으로 변환하여 출력
   입력: 없음
   반환: 없음
*/
void convertFlightTime(void) {
    float totalHours;  // 총 소요시간(시간)
    int days, hours, minutes;

    // 소요시간 입력 받기
    printf("비행 소요시간(시간)? ");
    scanf("%f", &totalHours);

    // 일 계산
    days = (int)totalHours / 24;
    totalHours = totalHours - (days * 24);  // 남은 시간

    // 시간 계산
    hours = (int)totalHours;

    // 분 계산
    minutes = (int)((totalHours - hours) * 60);  // 소수 부분을 분으로 변환

    // 결과 출력
    printf("비행 소요시간은 %d일 %d시간 %d분입니다.\n", days, hours, minutes);
}