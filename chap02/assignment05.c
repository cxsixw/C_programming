/*
���ϸ�: assignment05.c
����: �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷�
�ۼ���: ������
��¥: 2025.4.1
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printWeight()
{
    float weight;

    printf("������? ");
    scanf("%f", &weight);

    printf("�Է��� �����Դ� %.2fKG�Դϴ�.\n", weight);
}

int main()
{
    printWeight();
    return 0;
}