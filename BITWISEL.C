#include<stdio.h>
#include<conio.h>

void main()
{
	int A,B,sum=0;
	clrscr();

	printf("Enter value for A:");
	scanf("%d", &A);

	printf("Enter value for B:");
	scanf("%d", &B);

	//XOR Operator : Swapping without using third variable

	A = A ^ B;
	B = A ^ B;
	A = A ^ B;

	printf("After Swapping the value of A= %d and B= %d", A, B);

	//Left Shift Operator

	printf("\nLeft Shift of Varaible A: %d", A<<1);

	//Right Shift Operator

	printf("\nRight Shift of Varaible B: %d", B>>1);

	//Assignment Operator

	sum += A; // sum = sum + A;

	printf("\nSum is: %d", sum);

	getch();
}