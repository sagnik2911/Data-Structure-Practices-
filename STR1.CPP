#include<stdio.h>
#include<conio.h>
  void main()
  {
  int i=0,n=0;
  char str[100];
  clrscr();
  printf("input characters:");
  scanf("%s",&str);
  while (str[i]!='\0')
  {
    n++;
    i++;
  }
  printf("%d",n);
  getch();
  }