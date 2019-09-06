#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf(\n"please input rectangle length and bredth");
scanf("%d%d",&a,&b);
c=2*(a+b);
d=a*b;
printf("\n Area will be:%d",d);
printf("\n perimeter will be:%d",c);
getch();
}