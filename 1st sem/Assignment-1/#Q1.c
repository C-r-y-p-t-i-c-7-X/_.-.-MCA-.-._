//
//Q1- Input your name, age, roll_no branch, percentage of marks and display.

#include <stdio.h> //stdio: Stands for Standard Input Output.
// <stdio.h> Provides

// I/O Functions: printf(), scanf(), getchar(), putchar(), puts(), fgets().

// File Handling: fopen(), fclose(), fread(), fwrite(), fprintf().

// System Constants & Types: NULL, EOF (End of File), and the FILE data structure.

int main() {
    char name[50], branch[50];
    int age, roll_no;
    float percentage;

    printf("Enter Name: ");
    
    scanf(" %[^\n]", name);
//    %[^\n] is the scanset conversion specifier in scanf dfference from %s and %c
//	%s read until the space and %c reads only 1 byte charater.
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter Branch: ");
    scanf(" %[^\n]", branch);
    printf("Enter Percentage of Marks: ");
    scanf("%f", &percentage);

    printf("\n--- Student Details ---\n");
    printf("Name       : %s\n", name);
    printf("Age        : %d\n", age);
    printf("Roll No    : %d\n", roll_no);
    printf("Branch     : %s\n", branch);
    printf("Percentage : %.2f%%\n", percentage);
    
//    %.2f%% " is %2f is formart specifies and .2 is a specifies that after decimal only 2 digit to show. "%%" as single % can't printed directly so we use %% it will print in outupt.

    return 0;
}

/*
Output:-
--------------------


Enter Name: madhav
Enter Age: 21
Enter Roll No: 111
Enter Branch: MCA
Enter Percentage of Marks: 60

--- Student Details ---
Name       : madhav
Age        : 21
Roll No    : 111
Branch     : MCA
Percentage : 60.00%

*/
