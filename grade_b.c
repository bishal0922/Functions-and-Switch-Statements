/*
Bishal Giri
This program asks the user for their grade and gives a response based on their grades along with their initial input.
*/

#include <stdio.h>

//function call
void run_switch( char messageA[]);

int main ()
{
    run_switch("Keep up the excellent work!\n");
    run_switch("Awesome! You made an A!\n");
    run_switch("Way to go!\n");
    return 0;
}

//function definition
void run_switch(char messageA[])

{
    char grade = 'B'; //grade could've been empty or just any character, here 'B' is irrelevant

    printf("Enter student grade (uppercase or lowercase): ");
    scanf(" %c", &grade);
    printf("Your grade is  %c\n", grade );

    //switch function
    switch (grade)
    {
    case 'A' :
    case 'a' :
        printf("%s",messageA); //prints the string which was taken as as argument as the message for A
        break;
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
    default :
        printf("Invalid grade\n" );
    }
    printf("Function finished\n");
}


