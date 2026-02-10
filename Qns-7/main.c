// Question-7: Write an algorithm, program to read the marks of a student in 4 different subjects, calculate the total marks and percentage, and draw a flowchart.
#include <stdio.h>

int main()
{
    int marks1, marks2, marks3, marks4, total;
    float percentage;

    // Read marks for 4 subjects
    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);
    printf("Enter marks for subject 4: ");
    scanf("%d", &marks4);

    if (marks1 < 0 || marks1 > 100 || marks2 < 0 || marks2 > 100 || marks3 < 0 || marks3 > 100 || marks4 < 0 || marks4 > 100)
    {
        printf("Error: Mark should be between 0 and 100.\nTry again.\n");
        return 1;
    }
    else
    {
        // Calculate total marks and percentage
        total = marks1 + marks2 + marks3 + marks4;
        percentage =(float) total / 400 * 100;

        // Display results
        printf("Total Marks: %d\n", total);
        printf("Percentage: %.2f\n", percentage);
        return 0;
    }
}
