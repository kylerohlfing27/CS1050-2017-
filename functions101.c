//Kyle Rohlfing
//KARTHT
//CS1050 - Lab 4 -functions101.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getInput(void);
int menu(void);
int checkPrime(int);
int addDigit(int);
int rngLoop(int);

int main(void)
{
    int input = getInput();                 //List of variables for functions
    int choice = menu();
    int prime = checkPrime(input);
    int add = addDigit(input);
    int random = rngLoop(input);

    srand(time(NULL));
    rngLoop(input);
    while(1)
    {
        switch(choice)
        {
            case(1):
                if(prime == 0)
            {
                printf("%d is not a prime number\n", input);
            }
                else
                {
                    printf("%d is a prime number\n", input);
                }
                break;

            case(2):
                printf("The sum of the digits of %d is %d", input, add);
                break;

            case(3):
                printf("%d ", random);

            case(4):
                return 0;
                break;

            default:
                continue;
        }
    }
    return 0;
}

int getInput(void)
{
    int input;

    printf("Please enter an integer between 0 and 1000: ");
    scanf("%d", &input);

    while(input < 0 || input > 1000)
    {
        printf("Error! The integer must be between 0 and 1000!\nPlease enter a new integer: ");
        scanf("%d", &input);
    }
    return input;
}

int menu(void)
{
    int menu;

    printf("***** MAIN MENU *****\n\n");
    printf("1: Check prime number\n2: Add up individual digits\n3: Generate random values\n4: Exit\n");
    scanf("%d", &menu);
    while(menu < 1 || menu > 4)
    {
        printf("Invalid selection! Returning to main menu.");
        printf("***** MAIN MENU *****");
        printf("1: Check prime number\n2: Add up individual digits\n3: Generate random values\n4: Exit\n");
        scanf("%d", &menu);
    }
    return menu;
}

int checkPrime(int input)
{
    int n;
    int primeR = 1;

    for(n = 2; n <= input/2; ++n)
    {
        if(input % n == 0)
        {
            primeR = 0;
        }
    }
    return primeR;
}

int addDigit(int input)
{
    int number = input;
    int sum;
    int remainder;

    while(number != 0)
    {
        remainder = number %10; //Gets the last digit of the integer
        sum = sum + remainder;     //Updates the sum with the new remainder
        number = number/10;      //chops off last digit
    }
    return sum;
}

int rngLoop(int input)
{
    int random;
    int x;
    int limit;
    int even;
    int odd;

    printf("Enter a limit for the random values between 0-100: ");
    scanf("%d", &limit);
    while(limit < 0 || limit > 100)
    {
        printf("Error! The limit must be between 0-100!\nPlease enter a new limit: ");
        scanf("%d", &limit);
    }

    for(x=0;x < input; x++)
    {
        printf("%d ",  rand()% limit);
        if(random %2 == 0)
        {
            even = ++even;
        }
        else
        {
            odd = ++odd;
        }
    }
    return ;
}

