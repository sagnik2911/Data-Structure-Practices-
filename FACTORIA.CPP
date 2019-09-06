#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j=1,n;
  printf("please input the number:: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    j=i*j;
  }
  printf("factorial is :%d",j);
  getch();
}


