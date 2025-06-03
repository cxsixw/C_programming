/*
파일명: assignment12.c
내용: PA10. 기차표 예매 프로그램
작성자: 나현아
날짜: 2025.6.3
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SEAT_COUNT 10

// 좌석 상태 출력 함수
void printSeats(char seats[]) {
    printf("현재 좌석: [");
    for (int i = 0; i < SEAT_COUNT; i++) {
        printf("%c", seats[i]);
        if (i != SEAT_COUNT - 1) printf(" ");
    }
    printf("]\n");
}

// 예매 가능한 좌석 수 계산
int availableSeats(char seats[]) {
    int count = 0;
    for (int i = 0; i < SEAT_COUNT; i++) {
        if (seats[i] == '0') count++;
    }
    return count;
}

// 좌석 예매 함수 (빈 좌석부터 할당)
void bookSeats(char seats[], int bookCount) {
    printf("예매한 좌석: ");
    int booked = 0;
    for (int i = 0; i < SEAT_COUNT && booked < bookCount; i++) {
        if (seats[i] == '0') {
            seats[i] = 'X';
            printf("%d ", i + 1);  // 좌석 번호 출력 (1부터 시작)
            booked++;
        }
    }
    printf("번 좌석을 예매했습니다.\n\n");
}

int main() {
    char seats[SEAT_COUNT];

    // 초기 좌석 상태 '0' 으로 설정 (빈 좌석)
    for (int i = 0; i < SEAT_COUNT; i++) {
        seats[i] = '0';
    }

    while (1) {
        printSeats(seats);

        int bookCount;
        printf("예매할 좌석수? ");
        scanf("%d", &bookCount);

        int available = availableSeats(seats);
        if (bookCount <= 0) {
            printf("예매할 좌석 수는 1 이상이어야 합니다.\n");
            continue;
        }
        if (bookCount > available) {
            printf("빈 좌석이 부족합니다. 남은 좌석 수: %d\n", available);
            printf("프로그램을 종료합니다.\n");
            break;
        }

        bookSeats(seats, bookCount);

        if (availableSeats(seats) == 0) {
            printf("모든 좌석이 예매되었습니다. 프로그램을 종료합니다.\n");
            break;
        }
    }

    return 0;
}