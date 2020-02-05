#include<stdio.h>
#include<conio.h>

void main()
{
	int number, remainder, result;
	clrscr();

	printf("Enter any number:");
	scanf("%d", &number);

	remainder = number % 2;

	(remainder == 0)? printf("Even") : printf("Odd");

	/*if(remainder == 0)
	printf("The number is Even");

	else
	printf("The number is Odd");*/

	getch();
}
