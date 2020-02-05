#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, c, Largest;
	clrscr();

	printf("Enter value for a:");
	scanf("%d", &a);

	printf("Enter value for b:");
	scanf("%d", &b);

	printf("Enter value for c:");
	scanf("%d", &c);

	Largest = (a>b)?((a>c)?a:c):((b>c)?b:c);

	//condition?true:false;

	printf("Largest number is: %d", Largest);

	getch();
}