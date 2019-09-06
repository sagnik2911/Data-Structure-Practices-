#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int A[50],n,i,j,temp;
   printf("Input number of elements::");
   scanf("%d",&n);
   printf("Input elements");
   for (i=0;i<n;i++)
   scanf ("%d",&A[i]);
   for (i=0;i<n;i++)
   {
     for (j=0;j<n-i;j++)
     {
       if (A[j]>A[j+1])
       {
	 temp=A[j];
	 A[j]=A[j+1];
	 A[j+1]=temp;
       }
     }
   }
   for (i=0;i<n;i++)
   printf("%d \n",A[i]);
   getch();
}

