#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int A[50],n,i;
  printf("number of numbers");
  scanf("%d",&n);
  printf("input numbers");
  for (i=0;i<n;i++)
  scanf("%d",&A[i]);
  for (i=0;i<n;i++)
  printf("%d ",A[i]);
  getch();
}