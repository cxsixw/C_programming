/* 파일명: assignment15.c
 * 내용: 원-달러 매매기준율과 환전우대율을 이용해 환율을 계산하고,
 *       구입할 달러에 해당하는 원화 금액을 출력하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.15
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calculateExchangeRate(void);

int main(void) {
    calculateExchangeRate();  // 환율 계산 함수 호출
    return 0;
}

/*
   함수명: calculateExchangeRate
   기능: 원-달러 매매기준율, 환전우대율, 구입 달러 입력을 받아
   환율을 계산하고 원화 금액을 출력
   입력: 없음
   반환: 없음
*/

void calculateExchangeRate(void) {
    double baseRate, discountRate, exchangeRate, dollarsToBuy, wonAmount;
    const double transactionFee = 1.75 / 100.0;  // 환전 수수료율 1.75%

    // 1. 원/달러 매매기준율과 환율우대율 입력 받기
    printf("원/달러 매매기준율? ");
    scanf("%lf", &baseRate);
    printf("환율우대율(0~100%)? ");
    scanf("%lf", &discountRate);

    // 2. 환전수수료를 적용한 실제 환율 계산
    exchangeRate = baseRate * (1 + transactionFee) * (1 - discountRate / 100.0);

    // 3. 실제 환율 출력
    printf("달러 살 때 환율은 %.8f입니다.\n", exchangeRate);

    // 4. 구입할 달러 입력 받기
    printf("구입할 달러(USD)? ");
    scanf("%lf", &dollarsToBuy);

    // 5. 원화로 환산
    wonAmount = dollarsToBuy * exchangeRate;

    // 6. 원화 금액 출력
    printf("USD %.2f 살 때 ==> KRW %.2f\n", dollarsToBuy, wonAmount);
}