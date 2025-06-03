/*
파일명: assignment06.c
문제: 메뉴 선택 프로그램
작성자: 나현아
작성일: 2025-05-23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu() {
    int choice;
    while (1) {
        printf("[1.파일 열기 2.파일 저장 3. 인쇄 0. 종료] 선택? ");
        scanf("%d", &choice);
        if (choice >= 0 && choice <= 3)
            return choice;
    }
}

int main() {
    int selected = choose_menu();

    switch (selected) {
    case 1:
        printf("파일 열기를 수행합니다.\n");
        break;
    case 2:
        printf("파일 저장을 수행합니다.\n");
        break;
    case 3:
        printf("인쇄를 수행합니다.\n");
        break;
    case 0:
        break;
    }

    return 0;
}