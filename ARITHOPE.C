#include<stdio.h>
#include<conio.h>

void main()

{
	int a,b,c;
	clrscr();

	printf("Enter value for variable a:");
	scanf("%d", &a);

	printf("\nEnter value for variable b:");
	scanf("%d", &b);

	//+ Operator

	c = a+b;

	printf("\nThe Addition of Two Numbers is: %d", c);

	// - Operator

	c = a-b;

	printf("\nThe Subtraction of Two Numbers is: %d", c);

	// * Operator

	c = a*b;

	printf("\nThe Multiplication of Two Numbers is: %d", c);

	// / Operator

	c = a/b;

	printf("\nThe Division of Two Numbers is: %d", c);

	// % Operator

	c = a%b;

	printf("\nThe Modulus of Two Numbers is: %d", c);

	//++Pre and Post++ Operator

	printf("\nPre Increment of variable a is: %d", ++a); // a=11

	printf("\nPost Increment of variable a is: %d", a++); // a=11

	printf("\nThe value of a is: %d", a); // a=12

	//--Pre and Post-- Operator

	printf("\nPre Decrement of variable b is: %d", --b); // b=19

	printf("\nPost Decrement of variable b is: %d", b--); // b=19

	printf("\nThe Value of B is: %d", b);

	getch();
}