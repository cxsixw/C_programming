/* 파일명: assignmnet09.c
 * 내용: 햄버거 가게의 계산서 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.21
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 함수 선언
void getInput(int* burger, int* fries, int* cola);
void calculateTotal(int burger, int fries, int cola);

int main() {
    int burger, fries, cola;

    // 입력 받기
    getInput(&burger, &fries, &cola);

    // 계산 함수 호출
    calculateTotal(burger, fries, cola);

    return 0;
}

// 입력 함수 정의
void getInput(int* burger, int* fries, int* cola) {
    printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");

    printf("햄버거 개수? ");
    scanf("%d", burger);
    printf("감자튀김 개수? ");
    scanf("%d", fries);
    printf("콜라 개수? ");
    scanf("%d", cola);
}

// 계산 함수 정의
void calculateTotal(int burger, int fries, int cola) {
    // 세트 개수 및 남은 개수 계산
    int setCount = (burger < fries && burger < cola) ? burger : (fries < cola) ? fries : cola;
    int burgerCount = burger - setCount, friesCount = fries - setCount, colaCount = cola - setCount;

    // 가격 계산
    int total = setCount * 6500 + burgerCount * 4000 + friesCount * 2000 + colaCount * 1500;

    // 출력
    printf("상품명         단가    수량    금액\n");
    if (setCount) printf("세트          6500    %d     %d\n", setCount, setCount * 6500);
    if (burgerCount) printf("햄버거      4000     %d     %d\n", burgerCount, burgerCount * 4000);
    if (friesCount) printf("감자튀김   2000     %d     %d\n", friesCount, friesCount * 2000);
    if (colaCount) printf("콜라        1500     %d     %d\n", colaCount, colaCount * 1500);
    printf("-----------\n합계 %d\n", total);
}