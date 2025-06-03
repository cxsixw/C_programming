/* 파일명: assignment05.c
 * 내용: 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.04.21
 * 버전: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // 섭씨 온도를 화씨 온도로 변환하는 함수
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// 화씨 온도를 섭씨 온도로 변환하는 함수
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double temperature;
    char scale;

    // 온도 입력 받기
    printf("온도? ");
    scanf("%lf %c", &temperature, &scale);

    // 입력된 온도에 따라 변환 및 출력
    if (scale == 'C' || scale == 'c') {
        double fahrenheit = celsiusToFahrenheit(temperature);
        printf("%.2f C ==> %.2f F\n", temperature, fahrenheit);
    }
    else if (scale == 'F' || scale == 'f') {
        double celsius = fahrenheitToCelsius(temperature);
        printf("%.2f F ==> %.2f C\n", temperature, celsius);
    }
    else {
        printf("잘못된 입력입니다.\n");
    }

    return 0;
}