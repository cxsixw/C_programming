/*
���ϸ�: assignment12.c
����: PA10. ����ǥ ���� ���α׷�
�ۼ���: ������
��¥: 2025.6.3
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SEAT_COUNT 10

// �¼� ���� ��� �Լ�
void printSeats(char seats[]) {
    printf("���� �¼�: [");
    for (int i = 0; i < SEAT_COUNT; i++) {
        printf("%c", seats[i]);
        if (i != SEAT_COUNT - 1) printf(" ");
    }
    printf("]\n");
}

// ���� ������ �¼� �� ���
int availableSeats(char seats[]) {
    int count = 0;
    for (int i = 0; i < SEAT_COUNT; i++) {
        if (seats[i] == '0') count++;
    }
    return count;
}

// �¼� ���� �Լ� (�� �¼����� �Ҵ�)
void bookSeats(char seats[], int bookCount) {
    printf("������ �¼�: ");
    int booked = 0;
    for (int i = 0; i < SEAT_COUNT && booked < bookCount; i++) {
        if (seats[i] == '0') {
            seats[i] = 'X';
            printf("%d ", i + 1);  // �¼� ��ȣ ��� (1���� ����)
            booked++;
        }
    }
    printf("�� �¼��� �����߽��ϴ�.\n\n");
}

int main() {
    char seats[SEAT_COUNT];

    // �ʱ� �¼� ���� '0' ���� ���� (�� �¼�)
    for (int i = 0; i < SEAT_COUNT; i++) {
        seats[i] = '0';
    }

    while (1) {
        printSeats(seats);

        int bookCount;
        printf("������ �¼���? ");
        scanf("%d", &bookCount);

        int available = availableSeats(seats);
        if (bookCount <= 0) {
            printf("������ �¼� ���� 1 �̻��̾�� �մϴ�.\n");
            continue;
        }
        if (bookCount > available) {
            printf("�� �¼��� �����մϴ�. ���� �¼� ��: %d\n", available);
            printf("���α׷��� �����մϴ�.\n");
            break;
        }

        bookSeats(seats, bookCount);

        if (availableSeats(seats) == 0) {
            printf("��� �¼��� ���ŵǾ����ϴ�. ���α׷��� �����մϴ�.\n");
            break;
        }
    }

    return 0;
}