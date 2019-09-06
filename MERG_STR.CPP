#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char A[50],B[50],C[100];
int j=0,i=0,k,n=0,m=0;
printf("Input elements of 1st string:");
scanf("%s",&A);
while (A[i]!='\0')
{
n++;
i++;
}
printf("Input elements of 2nd string:");
scanf("%s",&B);
while (B[j]!='\0')
{
m++;
j++;
}
for (i=0,k=0;k<n;i++,k++)
{
C[k]=A[i];
}
for (j=0,k=n;k<(n+m);j++,k++)
{
C[k]=B[j];
}
C[k]='\0';
printf("merged string will be:: %s",C);
getch();
}

