#include<stdio.h>
#include<conio.h>

void main()
{
   //char c=65;
   char c;
   clrscr();

   printf("Enter any Character");
   scanf("%c", &c);

   printf("Entered Character is: %c", c);

   printf("Entered Character's Decimal Value is: %d",c);

   getch();

}