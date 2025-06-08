/* ���ϸ�: assignment1.c
 * ����: ���̵�� �н����带 ����ü�� �����ϰ�, �н����带 *�� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.06.05
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

 // LOGIN ����ü ����
typedef struct {
    char id[21];
    char pw[21];
} LOGIN;

// �Լ� ���� ����
void getLogin(LOGIN* login);
void printLogin(const LOGIN* login);

int main(void) {
    LOGIN user;
    getLogin(&user);
    printLogin(&user);
    return 0;
}

// ����ڷκ��� ID�� PW �Է¹ޱ�
void getLogin(LOGIN* login) {
    printf("ID? ");
    scanf("%20s", login->id);

    printf("Password? ");
    scanf("%20s", login->pw);
}

// ID�� �״��, PW�� *�� ���
void printLogin(const LOGIN* login) {
    printf("ID: %s\n", login->id);
    printf("PW: ");
    int len = strlen(login->pw);
    for (int i = 0; i < len; i++) {
        printf("*");
    }
    printf("\n");
}