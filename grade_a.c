/*
Bishal Giri
This program asks the user for their grade and gives a response based on their grades along with their initial input
*/

#include <stdio.h>

void run_switch();

int main ()
{
    run_switch();
    run_switch();
    run_switch();
    return 0;
}

void run_switch()
{
    /* local variable definition */
    char grade = 'B';

    printf("Enter student grade (uppercase or lowercase): ");
    scanf(" %c", &grade);  // " %c" skips the white spaces: space, Tab, ENter
    printf("Your grade is  %c\n", grade );

    switch (grade)
    {
    case 'A' :
    case 'a' :
        printf("Excellent!\n" );
        break;  // makes the flow of control get out of switch
    case 'B' :
    case 'b' :
    case 'C' :
    case 'c' :
        printf("Well done\n" );
        break;
    case 'D' :
    case 'd' :
        printf("You passed, but remember that you need C or higher to enroll in CSE 1320.\n" );
        break;
    case 'F' :
    case 'f' :
        printf("Better try again\n" );
        printf("Make sure to attend lectures and start homework as soon as it is posted.\n");
        break;
    default :  // catch all other situations  // IS Optional
        printf("Invalid grade\n" );
    }
    printf("Function finished\n");
}

