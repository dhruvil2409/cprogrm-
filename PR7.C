#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,W;
clrscr();
	printf("enter the value of triangle :\n");
	printf("enter the value of a and b is :\n");
	scanf("%d%d",&a,&b);
	W=0.9*a*b;
	printf("area of triangle is : 0.9*%d*%d=%d",a,b,W);
getch();
}