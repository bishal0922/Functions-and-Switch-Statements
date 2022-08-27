/*
Bishal Giri
This program that takes the number of edges in a polygon from the user and prints out the shape.
*/

#include <stdio.h>

//function call
void print_shape(int edgesNo);

int main()
{
    int N; //variable declaration for N
    print_shape(4);
    print_shape(7);
    printf("How many edges does your polygon have? ");
    scanf("%d", &N);
    print_shape(N);
}

//function definition
void print_shape(int edgesNo)
{
    switch (edgesNo) //switch function
    {
    case 3 :
        printf("This is a triangle.\n");
        break;
    case 4 :
        printf("This is a rectangle.\n");
        break;
    case 5 :
        printf("This is a pentagon.\n");
        break;
    case 6 :
        printf("This is a hexagon.\n");
        break;
    default:
        printf("Shape not recognized.\n");
    }
}
