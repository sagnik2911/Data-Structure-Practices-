#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("\n Input number");
scanf("%d",&a);
if (a%2!=0)
printf("\n the number is odd");
else if (a%2==0)
printf("\n the number is even");
getch();
}