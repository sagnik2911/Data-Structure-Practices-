#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n input 1st digit,a:");
scanf("%d",&a);
printf("\n input 2nd digit,b:");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("\n 1st digit is:a=%d",a);
printf("\n 2nd digit is:b=%d",b);
getch();
}

