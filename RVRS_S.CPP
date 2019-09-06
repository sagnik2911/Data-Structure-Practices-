#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int n=0,i=0,j=0;
   char A[50],t;
   printf("input elements:");
   scanf("%s",&A);
   while (A[i]!='\0')
   {
      i++;
      n++;
   }
   for (i=0,j=n-1;i<(n/2);i++,j--)
   {
   t=A[j];
   A[j]=A[i];
   A[i]=t;
   }
   for (i=0;i<n;i++)
   printf("%c",A[i]);
   getch();
}