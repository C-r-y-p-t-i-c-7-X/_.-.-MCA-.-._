
// 8.Input unit price and quantity of three objects and calculate the total price.


#include <stdio.h>

int main() {
    float p1, p2, p3, total;
    int q1, q2, q3;

    // Input price and quantity for each object
    printf("Enter unit price and quantity for Object 1: ");
    scanf("%f %d", &p1, &q1);

    printf("Enter unit price and quantity for Object 2: ");
    scanf("%f %d", &p2, &q2);

    printf("Enter unit price and quantity for Object 3: ");
    scanf("%f %d", &p3, &q3);

    // Calculate total cost
    total = (p1 * q1) + (p2 * q2) + (p3 * q3);

    // Display total
    printf("\nTotal Price = %.2f\n", total);

    return 0;
}


/*
Output:-
--------------------
Enter unit price and quantity for Object 1: 1000
5000
Enter unit price and quantity for Object 2: 2500 
1000
Enter unit price and quantity for Object 3: 3500
2000

Total Price = 14500000.00

    */
