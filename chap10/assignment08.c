/* ���ϸ�: assignment08.c
 * ����: PRODUCT ����ü�� �̿��� ��ǰ ���� ���� �� ���
 * �ۼ���: ������
 * ��¥: 2025.06.05
 * ����: v1.0
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

    printf("��ǰ��? ");
    scanf("%s", item.name);

    printf("����? ");
    scanf("%d", &item.price);

    printf("���? ");
    scanf("%d", &item.stock);

    print_product(item);
    return 0;
}

void print_product(PRODUCT p) {
    printf("[%s %d�� ���: %d]\n", p.name, p.price, p.stock);
}
