  #include<stdio.h>
  #include<conio.h>
  void main()
  {
    int *x,*y,*z,a,b,c;
    printf("input numb&ers:");
    scanf("%d%d%d",&a,&b,&c);
    x=&a;
    y=&b;
    z=&c;
    if (*x>*y && *x>*z)
    printf ("biggest is: %d",*x);
    else if (*y>*z && *y>*x)
    printf ("biggest is: %d",*y);
    else
    printf ("biggest is: %d",*z);
    getch();
 }
