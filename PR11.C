#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,sub,result;
clrscr();
printf("enter the value of x is :\n");
scanf("%d",&x);
printf("enter the value of y is :\n");
scanf("%d",&y);
sub=x-y;
result=sub*sub;
printf("result value of x and y is :%d\n",result);
getch();
}