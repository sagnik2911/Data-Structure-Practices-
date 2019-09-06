  #include<stdio.h>
  #include<conio.h>
  int GCD (int a, int b)
  {
    if (a==0 || b==1 || a==b)
    return (b);
    if (b==0 || a==1)
    return (a);
    if (a>b)
    return GCD(b,a%b);
    else
    return GCD(a,b%a);
  }
  void main()
  {
   int x,y;
   clrscr();
   printf("input numbers");
   scanf("%d %d",&x,&y);
   printf("\nGCD is:%d",GCD(x,y));
   getch();
  }