#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int n,r,s=0,m;
   printf("Input a number of more than 1 digit:: ");
   scanf("%d",&n);
   while (n!=0)
   {
   m=n%10;
   s=(s*10)+m;
   n=n/10;
   }
   printf("the reverse number is:%d",s);
   getch();
}

