//Kyle Rohlfing
//KARTHT
//CS1050 Lab 3 - primefactors.c


#include <stdio.h>
#include <math.h>

int main(void)
{
    int number;
    int prime;
    int input = 1;
    int i;
    int j;
    int f;
    printf("Hello\n");

    printf("Please enter a number between 1-100\n");
    scanf("%d", &number);

    while(number < 1 || number > 100)
    {
        printf("Invalid number! Enter a number between 1-100\n");
        scanf("%d", &number);
    }

    while(input != 0)
    {
        printf("\nPlease select an option from the following choices: \n1: List all prime numbers \n2: Factorize the integer \n0: Exit\n");
        scanf("%d", &input);
        switch(input)
        {
            case 1:
                for(i = 2; i <= number; i++)
                {
                    prime = 1;
                    for(j =2; j < i/2; j++)
                    {
                        if(i % j == 0)
                        {
                            prime = 0;
                        }
                    }
                    if (prime == 1)
                    {
                        printf("%d ", i);
                    }
                }
                break;

            case 2:
                for(f=1; f<= number; f++)
                {
                    if(number % f == 0)
                    {
                        printf("%d ", f);
                    }
                }
                break;

            default:
                continue;



        }

    }
    return 0;
}
