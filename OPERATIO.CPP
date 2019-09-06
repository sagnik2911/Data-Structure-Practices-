#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  float i,fact=1,n,j,k,sum=0;
  int a;
  printf("The operatons::");
  printf("\n1. 1+1/2+1/3+.....1/n");
  printf("\n2. 1+1/2^2+1/3^2+....1/n^2");
  printf("\n3. 1/1!+1/2!+1/3!=....1/n!");
  printf("\n4. 1-3+5-7+....+n");
  printf("\n5. 1/1^2+2/2^3+3/3^4+...+n/n^n+1");
  printf("\ninput number corresponding to the operations");
  scanf("%d",&a);
  printf("\ninput limit of the operation");
  scanf("%f",&n);
  switch (a)
  {
    case 1:
    for (i=1;i<=n;i++)
      {
      j=1/i;
      sum=sum+j;
      }
    printf("\nthe sum us::%f",sum);
    break;
    case 2:
    for (i=1;i<=n;i++)
      {
      j=1/(i*i);
      sum=sum+j;
      }
    printf("\nthe sum is::%f",sum);
    break;
    case 3:
    for (i=1;i<=n;i++)
      {
       fact=fact*i;
       sum=sum+(1/fact);
       }
    printf("\nthe sum is::%f",sum);
    break;
    case 4:
    for (i=1;i<=n;i++)
       {
       j=pow(-1,i-1);
       k=j*((2*i)-1);
       sum=sum+k;
       }
    printf("\nthe sum is::%f",sum);
    break;
    case 5:
    for (i=1;i<=n;i++)
       {
       j=pow(i,i);
       sum=sum+(1/j);
       }
    printf("\nthe sum is::%f",sum);
    break;
  }
 printf("\nthe sum is::%f",sum);
 getch();
}