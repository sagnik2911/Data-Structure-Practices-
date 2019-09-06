#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int n,m,s=0;
   printf("input the numbers from where you want to start summation and to stop:");
   scanf("%d%d",&n,&m);
   while (n<=m)
   {
   s=s+n;
   n=n+1;
   }
   printf("the sum is:%d",s);
   getch();
}

