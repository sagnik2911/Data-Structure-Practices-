#include<stdio.h>
#include<conio.h>
void main()
{
int c,i=0,j=1,k;
for (c=0;c<10;c++)
  {
  if (c<=1)
  k=c;
  else
    {
    k=i+j;
    i=j;
    j=k;
    }
   printf("  %d",k);
  }
getch();
}


