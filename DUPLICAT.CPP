   #include<stdio.h>
   #include<conio.h>
   void main()
      {
      int i,j,A[100],flag,u,n;
      clrscr();
      printf("Input number of elements of array:");
      scanf("%d",&n);
      printf("Input the values to be stored in the array:\n");
      for (i=0;i<n;i++)
      scanf("%d",&A[i]);
      for (i=0;i<n-1;i++)
	 {
	 flag=0;
	 u=0;
	 if (i>0)
	   {
	   for (j=0;j<i;j++)
	     {
	     if (A[i]==A[j])
	     u=1;
	     }
	   }
	 if (u==0)
	   {
	   for (j=i+1;j<n;j++)
	     {
	     if (A[i]==A[j])
	     flag++;
	     }
	   }
	 if (flag!=0)
	 printf("\n%d value is repeated %d times",A[i],flag+1);
	 }
      getch();
      }
