#include<stdio.h>
#include<conio.h>

void hanoi(int,char,char,char);
void main()
{
  char beg='b',temp='t',end='e';
  int n;
  clrscr();
  printf("input number of discs:");
  scanf("%d",&n);
  hanoi(n,beg,temp,end);
  getch();
}
void hanoi(int n, char b, char t, char e)
{
  if (n==1)
  {
     printf("move %c -> %c\n",b,e);
     return;
  }
  hanoi(n-1,b,e,t);
  printf("move %c -> %c\n",b,e);
  hanoi(n-1,t,b,e);
  return;
}
