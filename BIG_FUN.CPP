 #include<stdio.h>
 #include<conio.h>
 int big (int x, int y, int z);
 void main()
 {
   int a,b,c,o;
   clrscr();
   printf("input 3 numbers");
   scanf("%d %d %d",&a,&b,&c);
   o=big(a,b,c);
   printf("biggest number is= %d",o);
   getch();
 }

 int big(int x, int y, int z)
 {
 if (x>y && x>z)
 return (x);
 if (y>x && y>z)
 return (y);
 else
 return (z);
 }