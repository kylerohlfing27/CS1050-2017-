#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getInput(void);
int getMax(void);
double initializeArray(int array[], int size, int max);

int getInput(void)
{
    int input;

    printf("Enter a value for the size of the array: \n");
    scanf("%d", &input);
    while(input <= 0|| input > 100)
    {
        printf("Invalid number! Please enter a value between 1-100!");
        scanf("%d", &input);
    }
    return input;
}

int getMax(void)
{
    int max;

    printf("Enter a value to limit the random values in the array: \n");
    scanf("%d", &max);
    while(max <= 0 || max > 100)
    {
        printf("Invalid limit! Please enter a value between 1-100: ");
        scanf("%d", &max);
    }
    return max;
}

double initializeArray(int array[], int size, int max)
{
    int i;
    double sum;

    for(i=0; i < size; i++)
    {
        array[i] = rand() % max + 1;
        sum += array[i];
    }
    return sum;
}

int main(void)
{
    int size = getInput();
    int max = getMax();
    int array[size];
    double sum = initializeArray(int array[], int size, int max);
    srand(time(NULL));

    printf("The sum of the numbers is %lf", sum);

    return 0;
}
