#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
for (i=1;i<=4;i++)
{
  for (s=3;s>=i;s--)
  {
  printf(" ");
  }
  for (j=1;j<=i;j++)
  {
  printf("*");
  }
  printf("\n");
}
for (i=1;i<=4;i++)
{
 for (s=1;s<=i;s++)
 {
 printf(" ");
 }
 for (j=3;j>=i;j--)
 {
 printf("*");
 }
 printf("\n");
}
getch();
}