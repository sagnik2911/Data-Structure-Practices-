#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{  clrscr();
   float a,b,c,D,e,x,y;
   printf("\nInput the co-efficient of x^2 ::");
   scanf("%f",&a);
   printf("\nInput the co-efficient of x ::");
   scanf("%f",&b);
   printf("\nInput the constant ::");
   scanf("%f",&c);
   D=(b*b)-(4*a*c);
   if (D<0)
   printf("\nthe roots are imaginary");
   else
   {
   e=sqrt(D);
   x=(-b+e)/(2*a);
   y=(-b-e)/(2*a);
   printf("\nthe roots are::\n%f\n%f",x,y);
   }
   getch();
}
