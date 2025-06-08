/* 파일명: assignment08.c
 * 내용: PRODUCT 구조체를 이용한 제품 정보 저장 및 출력
 * 작성자: 나현아
 * 날짜: 2025.06.05
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    char name[30];
    int price;
    int stock;
} PRODUCT;

void print_product(PRODUCT p);

int main(void) {
    PRODUCT item;

    printf("제품명? ");
    scanf("%s", item.name);

    printf("가격? ");
    scanf("%d", &item.price);

    printf("재고? ");
    scanf("%d", &item.stock);

    print_product(item);
    return 0;
}

void print_product(PRODUCT p) {
    printf("[%s %d원 재고: %d]\n", p.name, p.price, p.stock);
}
