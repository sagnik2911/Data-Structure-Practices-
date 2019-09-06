#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf("\n input 2 digit number:");
scanf("%d",&a);
b=a%10;
c=a/10;
d=c+b;
printf("\n the sum of the digits will be:%d",d);
getch();
}

