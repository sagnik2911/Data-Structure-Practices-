#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("Input the year");
scanf("%d",&a);
if (a%400==0)
printf("The year is leap year");
else if (a%100==0)
printf("the year is not a leap year");
else if (a%4==0)
printf("the year is leap year");
getch();
}
