#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	char b;
	float c;
	double d;
	long double e;
	clrscr();

	printf("The size of int type: %d", sizeof(a));
	printf("\nThe size of char type: %d", sizeof(b));
	printf("\nThe size of float type: %u", sizeof(c));
	printf("\nThe size of double type: %u", sizeof(d));
	printf("\nThe size oflong double type: %u", sizeof(e));

	//if(sizeof(int) == 2)
	//printf("\nIt is true...");

	getch();
}