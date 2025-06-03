/* 파일명: assignment04.c
 * 내용: 연도를 입력받아 윤년인지 검사하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.21
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 윤년을 판단하는 함수
 /*
     함수명: isLeapYear
     기능: 주어진 연도가 윤년인지 아닌지 판단하여 출력
     입력: year (연도)
     반환: 없음
 */
void isLeapYear(int year)
{
    // 윤년 판단 조건
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d년은 윤년입니다.\n", year);  // 윤년인 경우
    else
        printf("%d년은 윤년이 아닙니다.\n", year);  // 윤년이 아닌 경우
}

int main()
{
    int year;

    // 연도 입력받기
    printf("연도? ");
    scanf("%d", &year);

    // 윤년 판단 함수 호출
    isLeapYear(year);

    return 0;
}