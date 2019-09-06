#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,l;
 for (i=1;i<=4;i++)
 {
   for (j=1;j<=i;j++)
   {
   printf("*");
   }
   for (k=8-2*i;k>=1;k=k-1)
   {
   printf(" ");
   }
   for (l=1;l<=i;l++)
   {
   printf("*");
   }
   printf("\n");
 }
 getch();
}

