/*
���ϸ�: assignment02.c
����: �л� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷�
�ۼ���: ������
��¥: 2025.4.1
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printStudentGrade()
{
    int studentNumber;
    double grade;

    printf("�л��� ��ȣ�� �Է��ϼ���: ");
    scanf("%d", &studentNumber);

    printf("�л��� ������ �Է��ϼ���: ");
    scanf("%lf", &grade);

    printf("%d�� �л��� ������ %.6f�Դϴ�.\n", studentNumber, grade);
}

int main()
{
    printStudentGrade();
    return 0;
}