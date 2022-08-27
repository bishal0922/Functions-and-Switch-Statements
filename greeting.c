/*
Bishal Giri
This program will ask for the first and last name, then for the relation and then print a greeting.
This will be repeated 4 times.
*/

#include <stdio.h>

//function call
void run1();

int main()
{
    printf("This program will ask for the first and last name, then for the relation and then print a greeting.");
    printf("\nThis will be repeated 4 times.\n");
    printf("The first call:\n");
    run1();
    printf("\n\nThe second call:\n");
    run1();
    printf("\n\nThe third call:\n");
    run1();
    printf("\n\nThe fourth call:\n");
    run1();
    printf("\n\nBye.");
    return 0;
}

//function definition
void run1()
{
    // Write your own code here. Remove the place holder printf statement.
    char first_name[50];
    char second_name[50];
    int relation;
    printf("Please enter your first name: ");
    scanf("%s", &first_name);
    printf("Please enter your last name: ");
    scanf("%s", &second_name);
    printf("Please enter your relation: 1-for close friend, 2-for acquaintance (anything else will mean stranger). ");
    scanf("%d", &relation);

    if (relation == 1)
    {
        printf("Hi %s! How are you!", first_name);
    }
    else if(relation == 2)
    {
        printf("Good morning Mr./Mrs %s. How have you been?", second_name);
    }
    else
    {
        printf("I am sorry. I don't believe we have met.");
    }
}
