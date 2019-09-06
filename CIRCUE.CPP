#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void Qinsert(int [],int *,int *,int);

int Qdelete(int [],int *,int *);

void main()
{
    int Q[size],front=-1,rear=-1,data,ans;
    clrscr();
    while(1)
    {
       printf("\n--------MENU----------\n");
       printf("1. queue insert\n");
       printf("2. queue delete\n");
       printf("3. exit\n");
       printf("input choice::");
       scanf("%d",&ans);
       switch(ans)
       {
	  case 1:
	  printf("input element:");
	  scanf("%d",&data);
	  Qinsert(Q,&rear,&front,data);
	  break;
	  case 2:
	  data=Qdelete(Q,&rear,&front);
	  printf("deleted element: %d",data);
	  break;
	  case 3:
	  exit (0);
       }
    }
    getch();
}


void Qinsert(int Q[],int *r,int *f,int data)
{
	 //check queue is full
	 if(*f==(*r+1)%size)
	 {
		printf("queue is full\n");
		return;
	 }
	 //update rear
	 *r=((*r+1)%size);
	 //insert data
	 Q[*r]=data;
	 if (*f==-1)
	 *f=0;
	 return;
}

int Qdelete(int Q[],int *r,int *f)
{
	 int temp;
	 //check queue empty
	 if (*f==-1)
	 {
	   printf("queue is empty\n");
	   return 0;
	 }  
	 temp=Q[*f];
         if (*f==*r)
	 {
	 *f=-1;
	 *r=-1;
	 }    
	 *f=(*f+1)%size;
	 return temp;
}

