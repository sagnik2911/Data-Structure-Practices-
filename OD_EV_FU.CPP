  #include<stdio.h>
  #include<conio.h>
  void evenodd(int x)
  {
     if (x%2==0)
     printf("the number is even");
     else
     printf("the number is odd");
  }
  void main()
  {
     int a;
     printf("input number:");
     scanf("%d",&a);
     evenodd(a);
     getch();
   }



