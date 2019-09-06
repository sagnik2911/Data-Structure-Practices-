   #include<stdio.h>
   #include<conio.h>
   int fibo(int x);
   void main()
   {
     int n,i=0,c;
     printf("input terms of fibonacci series");
     scanf("%d",&n);
     printf("fibonacci series: \n");
     for (c=1;c<=n;c++)
     {
       printf("%d  ",fibo(i));
       i++;
     }
     getch();
   }
   int fibo(int x)
   {
     if (x==0)
       return 0;
     else if (x==1)
       return 1;
     else
       return ( fibo(x-1)+fibo(x-2) );
   }