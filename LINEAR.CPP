#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int A[50],i,element,a,n;
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
 {
 printf("entered element present in Array");
 printf("\nposition is: %d",i);
 break;
 }
 else
 goto sos;
 }
 sos:
 printf("element not present");
 getch();
}
