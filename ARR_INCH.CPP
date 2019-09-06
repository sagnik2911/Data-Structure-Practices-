#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int i,A[50],n,small,a,b,c,big;
  printf("How many numbers you want to perform with?");
  scanf("%d",&n);
  printf("input numbers::");
  for (i=0;i<n;i++)
  scanf("%d",&A[i]);
  big=A[0];
  a=0;
  for (i=1;i<n;i++)
  {
    if (A[i]>big)
    {
    big=A[i];
    a=i;
    }
  }
  printf("biggest number: %d",big);
  small=A[0];
  b=0;
  for (i=1;i<n;i++)
  {
    if (A[i]<small)
    {
    small=A[i];
    b=i;
    }
  }
  printf("\nsmallest number: %d",small);
  c=A[a];
  A[a]=A[b];
  A[b]=c;
  printf("\ninterchanged array is:");
  for (i=0;i<n;i++)
  printf("%d  ",A[i]);
  getch();
}

