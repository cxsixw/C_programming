/*
파일명: assignment18.c
문제: 인자로 전달된 정수의 약수를 구해서 출력하는 함수 작성 및 0~999 사이 임의의 정수 3개 생성 후 출력
작성자: 나현아
작성일: 2025-05-23
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int num) {
    int count = 0;
    int divisors[1000];

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisors[count++] = i;
        }
    }

    printf("%d의 약수: ", num);
    for (int i = 0; i < count; i++) {
        printf("%d", divisors[i]);
        if (i != count - 1) {
            printf(" ");
        }
    }
    printf(" => 총 %d개\n", count);
}

void generate_and_print_divisors() {
    int nums[3];
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        nums[i] = rand() % 1000;
    }

    for (int i = 0; i < 3; i++) {
        divisors(nums[i]);
    }
}

int main() {
    generate_and_print_divisors();
    return 0;
}