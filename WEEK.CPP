#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int a;
   printf("\nInput the number of the day of the week:: ");
   scanf("%d",&a);
   switch (a)
   {
   case 1:
   printf("\nthe day is sunday");
   break;
   case 2:
   printf("\nthe day is monday");
   break;
   case 3:
   printf("\nthe day is tuesday");
   break;
   case 4:
   printf("\nthe day is wednesday");
   break;
   case 5:
   printf("\nthe day is thursday");
   break;
   case 6:
   printf("\nthe day is friday");
   break;
   case 7:
   printf("\nthe day is saturday");
   break;
   default:
   printf("\ninvalid input");
   }
   getch();
}


