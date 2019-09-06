 #include<stdio.h>
 #include<conio.h>
 void display(int x,int y);
 void main()
 {

   int a,b;
   printf("enter the value for a and b\n");
   scanf("%d %d",&a,&b);

   display(a,b);
   getch();
 }


 void display(int x,int y)
 {
   int temp;
   temp=x;
   x=y;
   y=temp;
   printf("%d %d",x,y);
 }