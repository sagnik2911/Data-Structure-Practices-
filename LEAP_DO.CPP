#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a=1900;
  do
  {
  if (a%400==0)
  printf("%d  ",a);
  else if (a%100==0)
  printf("");
  else if (a%4==0)
  printf("%d  ",a);
  a=a+1;
  }
  while (a<2100);
  getch();
}
