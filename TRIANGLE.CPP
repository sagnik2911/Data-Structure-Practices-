#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c,e,p,s;
printf("Input length of the sides of the triangle:");
scanf("%f%f%f",&a,&b,&c);
if ((a+b) <= c)
printf("Triangle cannot be possible");
else if ((a+c) <= b)
printf("Triangle cannot be possible");
else if ((b+c) <= a)
printf("Triangle cannot be possible");
else
s=(a+b+c)/2;
p=2*s;
e=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n Area will be:%f",e);
printf("\n2 perimeter will be:%f",p);
getch();
}
