#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int avg,n,m,p=0,s=0;
   printf("input the numbers from where you want to get average:");
   scanf("%d%d",&n,&m);
   while (n<=m)
   {
   s=s+n;
   n=n+1;
   p=p+1;
   }
   avg=s/p;
   printf("the average of the numbers between these 2 numbers is:%d",avg);
   getch();
}

