#include<stdio.h>
#include<conio.h>

void main()
{
	float a, b, c;
	clrscr();

	printf("Enter the value for a:");
	scanf("%f", &a);

	printf("\nEnter the value for b:");
	scanf("%f", &b);

	c = a+b;

	printf("\nSum of Two Numbers are= %.1f", c);

	getch();

}