/* 파일명: assignment1.c
 * 내용: 아이디와 패스워드를 구조체로 저장하고, 패스워드를 *로 출력하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.06.05
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

 // LOGIN 구조체 정의
typedef struct {
    char id[21];
    char pw[21];
} LOGIN;

// 함수 원형 선언
void getLogin(LOGIN* login);
void printLogin(const LOGIN* login);

int main(void) {
    LOGIN user;
    getLogin(&user);
    printLogin(&user);
    return 0;
}

// 사용자로부터 ID와 PW 입력받기
void getLogin(LOGIN* login) {
    printf("ID? ");
    scanf("%20s", login->id);

    printf("Password? ");
    scanf("%20s", login->pw);
}

// ID는 그대로, PW는 *로 출력
void printLogin(const LOGIN* login) {
    printf("ID: %s\n", login->id);
    printf("PW: ");
    int len = strlen(login->pw);
    for (int i = 0; i < len; i++) {
        printf("*");
    }
    printf("\n");
}