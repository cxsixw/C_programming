/* 파일명: assignment09.c
 * 내용: 동영상의 재생시간을 초 단위로 입력받아 시간을 계산하여 출력하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 함수 원형
void convertTime(void);

int main(void) {
    convertTime();  // 재생시간 변환 함수 호출
    return 0;
}

/*
   함수명: convertTime
   기능: 재생시간(초)을 입력받아 시간, 분, 초로 변환하여 출력
   입력: 없음
   반환: 없음
*/

void convertTime(void) {
    int totalSeconds;  // 총 재생시간(초)
    int hours, minutes, seconds;

    // 초 단위로 재생시간 입력 받기
    printf("재생시간(초)? ");
    scanf("%d", &totalSeconds);

    // 시간 계산
    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;  // 나머지(초로 남은 시간)

    // 분 계산
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;  // 나머지(초로 남은 시간)

    // 결과 출력
    printf("재생시간은 %d시간 %d분 %d초입니다.\n", hours, minutes, seconds);
}