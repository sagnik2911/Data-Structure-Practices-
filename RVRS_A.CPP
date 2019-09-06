#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int A[50],n,i,j,t;
   printf("input number of elements");
   scanf("%d",&n);
   printf("input elements");
   for (i=0;i<n;i++)
   scanf("%d",&A[i]);
   for (i=0,j=n-1;i<(n/2);i++,j--)
   {
   t=A[j];
   A[j]=A[i];
   A[i]=t;
   }
   for (i=0;i<n;i++)
   printf("\n %d",A[i]);
   getch();
}