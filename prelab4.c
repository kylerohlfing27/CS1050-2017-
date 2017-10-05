#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getInput(void);     //Function prototype
void rngLoop(int);      //Function prototype

int main(void)
{
    srand(time(NULL));
    int input = getInput();
    //Calling getInput function
    //and sets the return value to input variable
    rngLoop(input);
    return 0;
}

int getInput(void)
{
    int input = 0;
    printf("Please enter an integer between 0-100: ");
    scanf("%d", &input);

    while (input < 0 || input > 100)
    {
        printf("Error! Valid numbers are from 0-100\nPlease enter a new variable: ");
        scanf("%d", &input);
    }
    return input;
}

void rngLoop(int input)
{
    int x;

    for(x = 0; x < input; x++)
    {
        printf("%d ", rand()% 101);       //Prints random numbers between 1-100, it starts at 0
    }
    printf("\n");

}
