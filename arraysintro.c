//Kyle Rohlfing
//KARTHT
//CS1050 - LAB6 - arraysintro.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getInput(void);
int rngMax(void);
void initializeArray(int, int);
int arrayMin(int[], int);
int arrayMax(int[], int);
double arrayAvg(int[], int);

int main(void)
{
    srand(time(NULL));
    int input = getInput();
    int max = rngMax();
    initializeArray(input, max);

    return 0;
}

int getInput(void)
{
    int input;

    printf("Please enter the size of the array: \n");
    scanf("%d", &input);
    while(input < 0 || input > 100)
    {
        printf("Invalid number! Please enter a value between 0 and 100: \n");
        scanf("%d", &input);
    }
    return input;
}

int rngMax(void)
{
    int max;

    printf("Enter the maximum value for the numbers in the array: \n");
    scanf("%d", &max);
    while(max <0 || max >100)
    {
        printf("Invalid number! Enter a value between 0 and 100: \n");
        scanf("%d", &max);
    }
    return max;
}

void initializeArray(int size, int max)
{
    int array[size];
    int i;

    for(i = 0; i < size; i++)
    {
        array[i] = rand() % max + 1;
    }
    arrayMin(array, size);
    arrayMax(array, size);
    arrayAvg(array, size);
}

int arrayMin(int array[], int size)
{
    int min = array[0];
    int location;
    int i;
    for(i = 0; i < size; i++)
    {
        if(array[i] <= min)
        {
            min = array[i];
            location = i + 1;
        }
    }
    printf("The minimum value is %d and occurs at index %d\n", min, location);
    return 0;
}

int arrayMax(int array[], int size)
{
    int max = array[0];
    int location;
    int i;
    for(i = 0; i < size; i++)
    {
        if(array[i] >= max)
        {
            max = array[i];
            location = i + 1;
        }
    }
    printf("The maximum value is %d and occurs at index %d\n", max, location);
    return 0;
}

double arrayAvg(int array[], int size)
{
    double sum;
    int i;
    for(i=0; i < size; i++)
    {
        sum += array[i];
    }
    sum = sum/size;
    printf("The average of the array is %lf\n", sum);
    return sum;
}
