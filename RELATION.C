#include<stdio.h>
#include<conio.h>

void main()
{
	int A, B;
	clrscr();

	printf("Enter Value for Variable A:");
	scanf("%d", &A);

	printf("Enter Value for Variable B:");
	scanf("%d", &B);

	// Logical Operators

	if(A && B)
	{
	   printf("A && B is True");
	}

	if(A || B)
	   printf("A || B is True");

	if(!A)
	printf("A is True");


	// Relational Operators

	if(A == B)
	printf("A is equal to B");

	if(A >= B)
	printf("A is greator to B");

	if(A <= B)
	printf("A is Less than");

	if(A != B)
	printf("A is not equal to B");

	getch();

}