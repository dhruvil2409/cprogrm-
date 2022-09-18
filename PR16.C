#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,sum,result;
clrscr();
printf("enter the value of x is :\n");
scanf("%d",&x);
printf("enter the value of y is :\n");
scanf("%d",&y);
printf("enter the value of z is :\n");
scanf("%d",&z);
sum=x+y+z;
result=sum*sum;
printf("result value of x,y and z is :%d\n",result);
getch();
}