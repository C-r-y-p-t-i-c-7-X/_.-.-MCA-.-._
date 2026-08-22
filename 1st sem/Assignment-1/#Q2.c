// Q2.Input two numbers and display their addition, subtraction, division, multiplication and remainder result.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition       : %d\n", a + b);
    printf("Subtraction    : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);

    if (b != 0) {
        printf("Division       : %.2f\n", (float)a / b);
        printf("Remainder      : %d\n", a % b);
    } else {
        printf("Division and remainder by zero are undefined.\n");
    }

    return 0;
}

/*
Output:-
--------------------

Enter two numbers: 22 77
Addition       : 99
Subtraction    : -55
Multiplication : 1694
Division       : 0.29
Remainder      : 22

*/
