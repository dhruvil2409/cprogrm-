#include<stdio.h>
#include<conio.h>
void main()
{

int v,i,r,A;
clrscr();
	printf("find the value of Simple Interest :\n");
	printf("enter the value of a, b and c :\n");
	scanf("%d%d%d",&v,&i,&r);
	A=(v*i*r)/100;
	printf("value of Simple Interest is : (%d*%d*%d)/100=%d",v,i,r,A);
getch();
}