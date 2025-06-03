/*
파일명: assignment02.c
내용: 학생 번호와 학점을 입력받아 출력하는 프로그램
작성자: 나현아
날짜: 2025.4.1
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printStudentGrade()
{
    int studentNumber;
    double grade;

    printf("학생의 번호를 입력하세요: ");
    scanf("%d", &studentNumber);

    printf("학생의 학점을 입력하세요: ");
    scanf("%lf", &grade);

    printf("%d번 학생의 학점은 %.6f입니다.\n", studentNumber, grade);
}

int main()
{
    printStudentGrade();
    return 0;
}