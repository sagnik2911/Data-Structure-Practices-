#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   clrscr();
   printf("\nInput the numbers for the following operations::");
   printf("\nFor addition: 1");
   printf("\nFor substraction:2");
   printf("\nFor multiplication:3");
   printf("\nFor Division:4");
   printf("\nFor modulo operation:5");
   printf("\nFor sine operation:6");
   printf("\nFor cosine operation:7");
   printf("\nFor tan operation:8");
   int a;
   printf("\nInput number corresponding to the operation::");
   scanf("%d",&a);
   if (a==1||a==2||a==3||a==4||a==5)
   {
   int b,c;
   printf("input the two numbers:: ");
   scanf("%d%d",&b,&c);
   switch(a)
   {case 1:
   printf("\nanswer will be:%d",(b+c));
   break;
   case 2:
   printf("\nanswer will be:%d",(b-c));
   break;
   case 3:
   printf("\nanswer will be:%d",(b*c));
   break;
   case 4:
   printf("\nanswer will be:%d",(b/c));
   break;
   case 5:
   printf("\nanswer will be:%d",(b%c));
   break;}
   }
   else if (a==6||a==7||a==8)
   {
   float b;
   printf("\nInput the angle in radian");
   scanf("%f",&b);
   switch(a)
   {case 6:
   printf("\nanswer will be:%f",sin(b));
   break;
   case 7:
   printf("\nanswer will be%f",cos(b));
   break;
   case 8:
   printf("\nanswer will be:%f",tan(b));
   break;
   default:
   printf("\ninvalid input");
   }
   }
   getch();
}


