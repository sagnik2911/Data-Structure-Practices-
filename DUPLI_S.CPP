   #include<stdio.h>
   #include<conio.h>
   void main()
      {
      int i=0,j,flag,u,n=0;
      char A[50];
      clrscr();
      printf("Input the word:\n");
      scanf("%s",&A);
      while (A[i]!='\0')
      {
      n++;
      i++;
      }
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
	 printf("\n%c character is repeated %d times",A[i],flag+1);
	 }
      getch();
      }
