/* 파일명: assignment01.c
 * 내용: 점의 좌표를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.21
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

 // 함수 선언
void checkPointInRectangle();

int main()
{
    // 함수 호출
    checkPointInRectangle();
    return 0;
}

// 함수 정의
/*
    함수명: checkPointInRectangle
    기능: 직사각형의 좌상단점과 우하단점, 점의 좌표를 입력받아
           그 점이 직사각형 영역 내에 있는지 검사하는 함수.
    입력: 없음
    반환: 없음
*/
void checkPointInRectangle()
{
    int left, top, right, bottom; // 직사각형의 좌상단점과 우하단점
    int x, y;  // 점의 좌표

    // 좌상단점 입력 안내
    printf("선택 영역의 좌상단점 (Left, top)?\n");
    scanf("%d %d", &left, &top);

    // 우하단점 입력 안내
    printf("선택 영역의 우하단점 (right, bottom)?\n");
    scanf("%d %d", &right, &bottom);

    // 점의 좌표 입력 안내
    printf("점의 좌표 (x, y)?\n");
    scanf("%d %d", &x, &y);

    // 점이 직사각형 영역 내에 있는지 검사
    if (x >= left && x <= right && y >= top && y <= bottom)
    {
        printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
    }
    else
    {
        printf("선택 영역 밖의 점입니다.\n");
    }
}