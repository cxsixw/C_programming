/* ���ϸ�: assignment03.c
 * ����: ����ü �迭�� �̿��� ���� �Է� ��� �α��� Ȯ�� ���α׷� (������ ��� ����)
 * �ۼ���: ������
 * �ۼ���: 2025.06.05
 * ����: v1.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

 // �α��� ���� ����ü ����
typedef struct {
    char id[20];
    char pw[20];
} LOGIN;

int main(void) {
    // ����ü �迭 �ʱ�ȭ
    LOGIN users[5] = {
        {"admin", "1234"},
        {"guest", "idontknow"},
        {"hyuna", "gptlover"},
        {"user1", "pass1"},
        {"user2", "pass2"}
    };

    char input_id[20], input_pw[20];

    printf("ID? ");
    scanf("%s", input_id);

    printf("PW: ");
    scanf("%s", input_pw);

    // �α��� ���� Ȯ��
    if (strcmp(input_id, "guest") == 0 && strcmp(input_pw, "idontknow") == 0) {
        printf("�α��� ����\n");
    }

    // �׻� ��µǴ� ���� ����
    printf("ID? .\n");

    return 0;
}