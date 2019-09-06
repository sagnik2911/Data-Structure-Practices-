#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Input numbers");
scanf("%d%d",&a,&b);
if (a>b)
printf("greater is:%d",a);
if (b>a)
printf("greater is:%d",b);
getch();
}