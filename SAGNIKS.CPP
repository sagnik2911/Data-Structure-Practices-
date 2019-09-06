#include<conio.h>
#include<stdio.h>
#define max 5

void push(int [],int ,int *,int);
int pop(int[],int *,int);
void display(int[],int,int *);


int main()
{
   int S[max],c,data,top=-1,UB=max-1,LB=0;
   do
   {
      printf("\n-----MENU-----\n");
      printf("1. Push\n");
      printf("2. Pop\n");
      printf("3. Display\n");
      printf("4. Exit\n");
      printf("Input choice::");
      scanf("%d",&c);
      switch(c)
      {
	 case 1:
	 printf("input element to be pushed:");
	 scanf("%d",&data);
	 push(S,data,&top,UB);
	 break;
	 case 2:
	 data=pop(S,&top,LB);
	 printf("Element popped:%d",data);
	 break;
	 case 3:
	 display(S,LB,&top);
	 break;
	 default:
	 printf("Error in choice");
      }
   }
   while(c!=4);
   getch();
return 0;
}

void push(int S[],int data,int *top,int UB)
{
  if (*top>=UB)
  {
    printf("stack overflow");
  }
  (*top)++;
  S[*top]=data;
}

int pop(int S[],int *top,int LB)
{
  int data;
  if (*top<LB)
  {
    printf("stack underflow");
    return 0;
  }
  data=S[*top];
  (*top)--;
  return (data);
}

void display(int S[],int LB,int *top)
{
  int i;
  if(*top<LB)
  printf("stack is empty");
  for(i=LB;i<=(*top);i++)
  printf("%d\n",S[i]);
  return;
}
