#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int m,a;
   printf("\nInput marks of the subject out of 100 ::");
   scanf("%d",&m);
   a=m/10;
   if (a==1||a==0||a==2||a==3)
   printf("\nThe student has failed");
   else
   {
   switch (a)
   {
   case 4:
   printf("\ngrade is:: D");
   break;
   case 5:
   printf("\ngrade is:: C");
   break;
   case 6:
   printf("\ngrade is:: B");
   break;
   case 7:
   printf("\ngrade is:: A");
   break;
   case 8:
   printf("\ngrade is:: E");
   break;
   case 9:
   printf("\ngrade is:: O");
   break;
   case 10:
   printf("\ngrade is:: O");
   break;
   }
   }
   getch();
}
