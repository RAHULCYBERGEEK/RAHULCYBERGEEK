#include<stdio.h>
int main()
{
    int marks;
    char grade;
    printf("\n Enter the marks of the students : ");
    scanf("%d ", &marks);

    if(marks < 0 || marks > 100)
    {
        printf("\n not possible ");
        exit (1);
    }
    else if(marks >= 75)
        grade = 'B';
    else if(marks >= 50 && marks < 60)
        grade = 'O';
    else if(marks >= 40 && marks < 50)
        grade = 'C';
    else
        grade = 'D';

    printf("\n GRADE = %c ", grade);

}
