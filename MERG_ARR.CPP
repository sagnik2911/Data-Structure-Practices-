#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int A[50],B[50],C[50],i,j,k,n,m;
printf("Input element numbers of 1st array");
scanf("%d",&n);
printf("Input elements");
for (i=0;i<n;i++)
scanf ("%d",&A[i]);
printf("Input element numbers of 2nd array");
scanf("%d",&m);
printf("Input elements");
for (j=0;j<m;j++)
scanf ("%d",&B[j]);
for (i=0,k=0;k<n;i++,k++)
{
C[k]=A[i];
}
for (j=0,k=n;k<(n+m);j++,k++)
{
C[k]=B[j];
}
printf("merged array's elements will be::");
for (k=0;k<(n+m);k++)
printf("\n%d",C[k]);
getch();
}

