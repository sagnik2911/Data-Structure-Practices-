  #include<stdio.h>
  #include<conio.h>
  void main()
  {
    int *x,*y,a,b,t;
    printf("input a=");
    scanf("%d",&a);
    printf ("input b=");
    scanf("%d",&b);
    x=&a;
    y=&b;
    t=*x;
    *x=*y;
    *y=t;
    printf ("\na=%d b=%d",a,b);
    getch();
 }
