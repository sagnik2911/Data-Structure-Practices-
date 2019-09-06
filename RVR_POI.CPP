  #include<stdio.h>
  #include<conio.h>
  void main()
  {
    int i,j;
    char *a;
    clrscr();
    printf("enter a string:");
    scanf("%s",a);
    i=0;
    while(*(a+i)!='\0')
    i++;
    for(j=i-1;j>=0;j--)
    printf("%c",*(a+j));
    getch();
  }
