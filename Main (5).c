#include <stdio.h>

int main()
{
    int n, index;
    char *grade;

    printf("Enter a number: ");
    scanf("%d", &n);

    index = n / 10;

    switch(index)
    {
        case 10:
        case 9:
        case 8:
            grade = "Honours";
            break;

        case 7:
        case 6:
            grade = "First Division";
            break;

        case 5:
            grade = "Second Grade";
            break;

        case 4:
            grade = "Third Grade";
            break;

        default:
            grade = "Fail";
            break;
    }

    printf("Grade = %s", grade);

    return 0;
}