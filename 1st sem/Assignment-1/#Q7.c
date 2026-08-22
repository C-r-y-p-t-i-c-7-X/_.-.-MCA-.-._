// 7.Input Temperature in Celsius and convert it into Fahrenheit and vice versa.

#include <stdio.h>

int main() {
    float c, f, fahrenheit, celsius;

    // 1. Celsius to Fahrenheit
    printf("Enter Temperature in Celsius: ");
    scanf("%f", &c);
    fahrenheit = (c * 9.0 / 5.0) + 32.0;
    printf("Temperature in Fahrenheit = %.2f\n\n", fahrenheit);

    // 2. Fahrenheit to Celsius
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &f);
    celsius = (f - 32.0) * 5.0 / 9.0;
    printf("Temperature in Celsius = %.2f\n", celsius);

    return 0;
}

/*
Output:-
--------------------
Enter Temperature in Celsius: 23
Temperature in Fahrenheit = 73.40

    */
