#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int A[50],B[50],flag=0,n,i,j;
printf("Input number of elements");
scanf("%d",&n);
printf("input elements");
for (i=0;i<n;i++)
scanf("%d",&A[i]);
for (i=0,j=n-1;j>=0;i++,j--)
B[j]=A[i];
for (j=0;j<n;j++)
printf("%d",B[j]);
for(i=0,j=0;i<n;i++,j++)
{
if (A[i]==B[j])
flag=1;
else
flag=0;
}
if (flag==0)
printf("Array is not palindrome");
else
printf("Array is palindrome");
getch();
}