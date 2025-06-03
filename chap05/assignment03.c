/* 파일명: assignment03.c
 * 내용: 거스름돈을 입력받아 각 금액 단위의 지폐와 동전 개수를 계산하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.21
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 거스름돈을 계산하여 각 화폐 단위별로 필요한 개수 출력
void calculateChange(int amount)
{
    // 화폐 단위 배열 (단위: 원)
    int denominations[] = { 50000, 10000, 5000, 1000, 100, 10 };
    int count, i;

    // 10원 미만 절사된 금액 출력
    printf("거스름돈 (10원미만 절사): %d\n", amount);

    // 각 화폐 단위별로 필요한 장수 또는 개수 계산
    for (i = 0; i < 6; i++) {
        count = amount / denominations[i];   // 해당 단위로 나눈 몫 (장 또는 개수)
        amount %= denominations[i];           // 나머지 금액 계산

        // 화폐 단위가 1000원 이상이면 "장" 출력, 그 외에는 "개" 출력
        if (denominations[i] >= 1000)
            printf("%d원 %d장\n", denominations[i], count);
        else
            printf("%d원 %d개\n", denominations[i], count);
    }
}

int main()
{
    int money;

    // 거스름돈 입력
    printf("거스름돈? ");
    scanf("%d", &money);

    // 10원 미만 절사
    money = (money / 10) * 10;

    // 거스름돈 계산 함수 호출
    calculateChange(money);

    return 0;
}