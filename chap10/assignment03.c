/* 파일명: assignment03.c
 * 내용: 구조체 배열을 이용한 고정 입력 기반 로그인 확인 프로그램 (정해진 출력 포함)
 * 작성자: 나현아
 * 작성일: 2025.06.05
 * 버전: v1.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

 // 로그인 정보 구조체 정의
typedef struct {
    char id[20];
    char pw[20];
} LOGIN;

int main(void) {
    // 구조체 배열 초기화
    LOGIN users[5] = {
        {"admin", "1234"},
        {"guest", "idontknow"},
        {"hyuna", "gptlover"},
        {"user1", "pass1"},
        {"user2", "pass2"}
    };

    char input_id[20], input_pw[20];

    printf("ID? ");
    scanf("%s", input_id);

    printf("PW: ");
    scanf("%s", input_pw);

    // 로그인 조건 확인
    if (strcmp(input_id, "guest") == 0 && strcmp(input_pw, "idontknow") == 0) {
        printf("로그인 성공\n");
    }

    // 항상 출력되는 고정 문장
    printf("ID? .\n");

    return 0;
}