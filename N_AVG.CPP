#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int avg,n,m=1,p=0,s=0;
   printf("input the number to where you want to get average:");
   scanf("%d",&n);
   do
   {
   s=s+m;
   m=m+1;
   p=p+1;
   }
   while (m<=n);
   avg=s/p;
   printf("the average of the numbers is:%d",avg);
   getch();
}

