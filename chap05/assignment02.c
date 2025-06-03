/* 파일명: assignment02.c
 * 내용: 이차원 평면에서 점의 좌표를 입력받아 사분면을 판단하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.21
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 함수 선언
void checkQuadrant(int x, int y);

int main()
{
    int x, y;

    // 점의 좌표 입력
    printf("점의 좌표 (x, y)? ");
    scanf("%d %d", &x, &y);

    // 사분면 확인 함수 호출
    checkQuadrant(x, y);

    return 0;
}

// 함수 정의
/*
    함수명: checkQuadrant
    기능: 주어진 점 (x, y)의 좌표를 입력받고, 그 점이 속한 사분면을 판별하여 출력
    입력: x, y (점의 좌표)
    반환: 없음
*/
void checkQuadrant(int x, int y)
{
    if (x > 0 && y > 0)
        printf("1사분면에 있습니다.\n");
    else if (x < 0 && y > 0)
        printf("2사분면에 있습니다.\n");
    else if (x < 0 && y < 0)
        printf("3사분면에 있습니다.\n");
    else if (x > 0 && y < 0)
        printf("4사분면에 있습니다.\n");
    else
        printf("축 위에 있습니다.\n");  // 원점(0, 0) 또는 축 위의 점 처리
}