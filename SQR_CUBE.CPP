#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int n,i,j,k;
  printf("input the limit upto which you want to view::");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    j=i*i;
    k=i*i*i;
    printf("%d %d %d",i,j,k);
    printf("\n");
  }
  getch();
}


