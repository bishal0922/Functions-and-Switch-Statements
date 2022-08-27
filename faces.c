/*
Bishal Giri
This program will print various faces based on the user's choices out of 4 possible faces.
*/

#include <stdio.h>

//function calls for all the face types
void face_one();
void face_two();
void face_three();
void face_three();
void face_four();

int main()
{
    //variable declaration
    int face_choice;

    //print functions for user choice menu
    printf("This program will print various faces.\n");
    printf("Options:\n");
    printf("1 - Bold, Open eyes\n");
    printf("2 - Bold, Closed eyes\n");
    printf("3 - Hat, Open eyes\n");
    printf("4 - Hat, Closed eyes\n");
    printf("Enter face choice (1/2/3/4): ");
    scanf("%d", &face_choice);

    //switch case to select the face based on user choice
    switch(face_choice)
    {
    case 1:
        face_one();
        break;
    case 2:
        face_two();
        break;
    case 3:
        face_three();
        break;
    case 4:
        face_four();
        break;
    default:
        printf("Invalid choice. Nothing will be printed.");
    }
    //final "Bye" is printed out at the end
    printf("\nBye");
}

//function definition for face three: hat and open eyes
void face_three()
{
    printf("   _______\n");
    printf("__|_______|__\n");
    printf("  | o   o |\n");
    printf("  |   ^   |\n");
    printf("   \\  -  /\n");
    printf("    -----");
}

//function definition for face one: bold and open eyes
void face_one()
{
    printf("");
    printf("   -------\n");
    printf("  /       \\\n");
    printf("  | o   o |\n");
    printf("  |   ^   |\n");
    printf("   \\  -  /\n");
    printf("    -----");
}

//function definition for face two: bold and closed eyes
void face_two()
{
    printf("   -------\n");
    printf("  /       \\\n");
    printf("  | -   - |\n");
    printf("  |   ^   |\n");
    printf("   \\  -  /\n");
    printf("    -----");
}

//function for face four: hat and closed eyes
void face_four()
{
    printf("   _______\n");
    printf("__|_______|__\n");
    printf("  | -   - |\n");
    printf("  |   ^   |\n");
    printf("   \\  -  /\n");
    printf("    -----");
}
