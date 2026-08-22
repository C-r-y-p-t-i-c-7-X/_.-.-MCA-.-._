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
    
    printf("Enter marks for 5 subjects:\n");

    printf("Subject 1: ");
    scanf("%f", &m1);

    printf("Subject 2: ");
    scanf("%f", &m2);

    printf("Subject 3: ");
    scanf("%f", &m3);

    printf("Subject 4: ");
    scanf("%f", &m4);

    printf("Subject 5: ");
    scanf("%f", &m5);

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

/*
Output:-
--------------------

Enter Name: Madhav
Enter Roll No: 111
Enter Branch: MCA
Enter Semester: 1
Enter marks for 5 subjects:
Subject 1: 74
Subject 2: 79
Subject 3: 82
Subject 4: 89
Subject 5: 93

----- MARK SHEET -----
Name        : Madhav
Roll No     : 111
Branch      : MCA
Semester    : 1
Total Marks : 417.00 / 500
Percentage  : 83.40%

    */
