#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("Input number");
scanf("%d",&a);
if (a>0)
printf("The number is positive");
else if (a<0)
printf("the number is negative");
else if (a==0)
printf("the number is 0");
getch();
}
