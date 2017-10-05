#include <stdio.h>

int main(void)
{

    int number;
    int counter;

    printf("Please enter an integer between 1-99: ");        //Gets initial number
    scanf("%d", &number);

    while(number > 99 ||number  < 1)        //Makes sure the number is between 1-99
    {
        printf("Invalid number! \nPlease enter a new variable between 1-99: ");
        scanf("%d", &number);
    }                                   //End while loop

    for (counter = 1; counter <= number ; counter++)

    {
        printf ("%d\n", counter);
    }

    switch(number % 2)
    {
        case 0:
            printf("The number is even\n");

            break;
        case 1:
            printf("The number is odd\n");
            break;

        default:
            break;
    }


    return 0;
}
