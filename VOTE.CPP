#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Input citizen's age:");
scanf("%d",&a);
if (a>18)
printf("person is eligible to vote");
else
printf("Person cannot vote");
getch();
}