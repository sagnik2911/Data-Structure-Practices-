#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf("Input 2 digit number:");
scanf("%d",&a);
b=a/10;
c=a%10;
d=c*10+b;
printf("\n reversed number will be:%d",d);
getch();
}
