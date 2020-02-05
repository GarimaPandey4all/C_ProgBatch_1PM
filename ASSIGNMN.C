#include<stdio.h>
#include<conio.h>

void main()
{
	int sum=2 , a;
	clrscr();

	printf("Enter value for a:");
	scanf("%d", &a);

	sum += a;

	printf("Sum is: %d", sum);

	//getch();
}