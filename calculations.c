//Kyle Rohlfing
//KARTHT
//CS1050 Lab 2 - Calculations.c


#include <stdio.h>

int main(void)
{
	int first;
	int second;
	int sum;
	int difference;
	int product;

	printf("Enter the first integer: ");
	scanf("%d" , &first);
	if (first < 0 || first > 10)
	{
		printf("The integer must be between 1 and 10!\n");
		printf("Re-enter the first integer: ");
		scanf("%d" , &first);
	}
	printf("Enter the second integer: ");
	scanf("%d" , &second);
	if (second < 0 || second > 10)
	{
		printf("The integer must be between 1 and 10!\n");
		printf("Re-enter the second integer: ");
		scanf("%d" , &second);
	}
	sum = first + second;
	printf("The sum is %d\n" , sum);

	difference = first - second;
	printf("The difference is %d\n" , difference);

	product = first * second;
	printf("The product of the two is %d\n" , product);

	if (first > second)
	{
		printf("The first integer is greater than the second\n");
	}
	else if (second > first)
	{
		printf("The second integer is greater than the first\n");
	}

	if (product %2==0)
	{
		printf("The product of the two is even\n");
	}
	else if (product %2 != 0)
	{
		printf("The product of the two is odd\n");
	}

	return 0;
}
