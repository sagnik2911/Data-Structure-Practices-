#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a;
printf("Input a character:");
scanf("%c",&a);
if ((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u'))
printf("The character is vowel");
else
printf("the character is consonant");
getch();
}
