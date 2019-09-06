#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int n,r,s=0,m;
   printf("Input a 3 digit number:: ");
   scanf("%d",&n);
   r=n;
   while (r!=0)
   {
   m=r%10;
   s=s+(m*m*m);
   r=r/10;
   }
   if (s==n)
   printf("the number is an armstrong number");
   else
   printf("the number is not armstrong number");
   getch();
}

