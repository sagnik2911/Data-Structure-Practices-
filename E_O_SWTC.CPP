#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int n,d;
   printf("input a number from 1 to 10:: ");
   scanf("%d",&n);
   d=n%2;
   switch (d)
   {
   case 0:
   printf("the number is even");
   case 1:
   printf("the number is odd");
   }
   getch();
}

