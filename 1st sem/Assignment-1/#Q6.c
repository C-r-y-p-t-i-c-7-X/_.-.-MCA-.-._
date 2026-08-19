// 6.Input your name, roll no, branch, semester and five subject marks. calculate total_mark secured and percentage of mark. Display a mark sheet.

#include <stdio.h>

int main() {
    char name[50], branch[20];
    int roll_no, sem;
    float m1, m2, m3, m4, m5, total, percentage;

    // Input student details
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter Branch: ");
    scanf("%s", branch);
    printf("Enter Semester: ");
    scanf("%d", &sem);

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Calculations
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100.0;

    // Output Mark Sheet
    printf("\n----- MARK SHEET -----\n");
    printf("Name        : %s\n", name);
    printf("Roll No     : %d\n", roll_no);
    printf("Branch      : %s\n", branch);
    printf("Semester    : %d\n", sem);
    printf("Total Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    return 0;
}
