#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int i,A[50],n,sum=0,avg;
  printf("how many numbers you want to add?");
  scanf("%d",&n);
  printf("input numbers::");
  for (i=0;i<n;i++)
  {
    scanf("%d",&A[i]);
    sum=sum+A[i];
  }
  avg=sum/n;
  printf("sum is: %d",sum);
  printf("\navg is: %d",avg);
  getch();
}

