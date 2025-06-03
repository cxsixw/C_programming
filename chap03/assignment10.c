/* 파일명: assignment10.c
 * 내용: PA10. 입력된 USD 금액과 환율을 이용해 원화(KRW)로 환산하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.4.3
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Dollar();

int main(void)
{
	Dollar();
	return 0;
}

void Dollar()
{
	float a, b;

	printf("USD? ");
	scanf_s("%f", &a);

	printf("원/달러 환율? ");
	scanf_s("%f", &b);

	// % .2f == 소수점 둘째 자리까지 출력
	printf("USD %.2f = KRW %.2F", a, a * b);

	return;

}