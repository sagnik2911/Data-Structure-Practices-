  #include<stdio.h>
  #include<conio.h>
    struct details
    {
       char name[10];
       int roll;
       char clas[10];
       char sec;
    };


    void main()
    {
       int i;
       struct details d[10];
       clrscr();
       printf("input details:: name, roll, class, sec \n");
       for (i=0;i<10;i++)
       {
	  scanf("%s %d %s %c", d[i].name, &d[i].roll, d[i].clas, &d[i].sec);
       }
       printf(" Name    Roll Class section");
       for (i=0;i<10;i++)
       {
	  printf("\n %s     %d %s %c", d[i].name, d[i].roll, d[i].clas, d[i].sec);
       }
       getch();
    }