//  Question-9:2.	Write a program to read marks of a student and display the grade according to the following criteria using if–else if ladder:
//     Marks ≥ 80 → Distinction
//     Marks ≥ 60 → First Division
//     Marks ≥ 50 → Second Division
//     Marks ≥ 40 → Pass
//     Marks < 40 → Fail 


int main()
{
    int marks;

    // Taking input from user
    printf("Enter marks of the student: ");
    scanf("%d", &marks);

    // Determining the grade based on marks using if-else if ladder
    if(marks < 0 || marks > 100)
    {
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
    }
    else if (marks >= 80)
    {
        printf("Grade: Distinction\n");
    }
    else if (marks >= 60)
    {
        printf("Grade: First Division\n");
    }
    else if (marks >= 50)
    {
        printf("Grade: Second Division\n");
    }
    else if (marks >= 40)
    {
        printf("Grade: Pass\n");
    }
    else
    {
        printf("Grade: Fail\n");
    }

    return 0;
}