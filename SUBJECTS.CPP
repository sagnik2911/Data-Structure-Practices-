#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e,f;
float g;
printf("input marks out of 100 of the five subjects");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
f=a+b+c+d+e;
g=f/5;
printf("Percentage will be:%f",g);
printf("Total will be:%d",f);
getch();
}

