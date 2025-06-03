/* 파일명: assignment02.c
  * 내용: Chap04-02 문제 - 화씨 온도를 섭씨 온도로 변환하는 프로그램
  * 작성자: 나현아
  * 날짜: 2025.4.15
  * 버전: v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 원형 선언
double convertFtoC(double fahrenheit);
int assignment0402(void);

int main(void)
{
    assignment0402();  // 문제 함수 호출
    return 0;
}

/*
   함수명: assignment0402()
   기능(책임): 화씨 온도를 입력받고, 섭씨 온도로 변환한 뒤 출력
   입력: 없음
   반환: 정수. 0이면 정상 종료
*/
int assignment0402(void)
{
    double f = 0.0;  // 화씨 온도
    double c = 0.0;  // 섭씨 온도

    // 입력
    printf("화씨온도? ");
    scanf("%lf", &f);

    // 변환
    c = convertFtoC(f);

    // 출력
    printf("%.2lf F = %.2lf C\n", f, c);

    return 0;
}

/*
   함수명: convertFtoC()
   기능(책임): 화씨 온도를 섭씨 온도로 변환하여 반환
   입력: 화씨 온도 (double)
   반환: 섭씨 온도 (double)
*/

double convertFtoC(double fahrenheit)
{
    double celsius = 0.0;

    // 섭씨 온도 = (화씨 - 32) * (5.0 / 9.0)
    celsius = (fahrenheit - 32) * (5.0 / 9.0);

    return celsius;
}