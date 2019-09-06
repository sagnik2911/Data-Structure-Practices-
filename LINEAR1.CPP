#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int A[50],i,element,a=0,n;
 printf("Set number of array elements");
 scanf("%d",&n);
 printf("input numbers::");
 for (i=0;i<n;i++)
 scanf("%d",&A[i]);
 printf("Input the element you want to find");
 scanf("%d",&element);
 for (i=0;i<n;i++)
 {
 if (element==A[i])
 a=1;
 break;
 }
 if (a==0)
 printf("element not present");
 else
 {
 printf("entered element present in Array");
 printf("\nposition is: %d",i);
 }
 getch();
}
