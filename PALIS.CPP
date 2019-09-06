  #include<stdio.h>
  #include<conio.h>
  void main()
    {
    clrscr();
    char A[50],B[50];
    int flag=0,n=0,i=0,j=0;
    printf("input string:");
    scanf("%s",&A);
    while (A[i]!='\0')
      {
      n++;
      i++;
      }
    for (i=0,j=n-1;j>=0;i++,j--)
      B[j]=A[i];
    for (j=0;j<n;j++)
      printf("%c",B[j]);
    for(i=0,j=0;i<n;i++,j++)
      {
      if (A[i]==B[j])
      flag=1;
      else
      flag=0;
      }
    if (flag==0)
    printf("\nString is not palindrome");
    else
    printf("\nString is palindrome");
    getch();
    }