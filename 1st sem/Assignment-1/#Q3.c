//3.Input principal, rate of interest, and time period, and calculate simple interest, compound interest, and total amount to pay in both the cases?

#include <stdio.h>
#include <math.h> 
//math.h is standard in C use for higher precision calculations like roots, power, etc.
//Here we can use float, as float can handle 6-7 decimal digits as it works for 32-bit, but double is a standard way when working with complex math because it has 15-17 decimal digits for precision in 64 bit.
//lf is long float. %f reads into 4 bytes, and lf reads 8 bytes, just like double, and there is another, long double, which reads 10-16 bytes.
int main() {
    double principal, rate, time;
    double si, total_si, ci, total_ci;

    printf("Enter Principal amount: ");
    scanf("%lf", &principal);
    printf("Enter Rate of interest (in %%): ");
    scanf("%lf", &rate);
    printf("Enter Time period (in years): ");
    scanf("%lf", &time);

    // Simple Interest
    si = (principal * rate * time) / 100.0;
    total_si = principal + si;

    // Compound Interest (compounded annually)
    total_ci = principal * pow(1 + (rate / 100.0), time); //pow stands for power
    ci = total_ci - principal;

    printf("\n--- Simple Interest Calculation ---\n");
    printf("Simple Interest     : %.2lf\n", si);
    printf("Total Amount to Pay : %.2lf\n", total_si);

    printf("\n--- Compound Interest Calculation ---\n");
    printf("Compound Interest   : %.2lf\n", ci);
    printf("Total Amount to Pay : %.2lf\n", total_ci);

    return 0;
}
/*
Output:-
--------------------

Enter Principal amount: 100000
Enter Rate of interest (in %): 12
Enter Time period (in years): 5

--- Simple Interest Calculation ---
Simple Interest     : 60000.00
Total Amount to Pay : 160000.00

--- Compound Interest Calculation ---
Compound Interest   : 76234.17
Total Amount to Pay : 176234.17

    */
