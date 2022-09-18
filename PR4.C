#include<stdio.h>
#include<conio.h>
void main()
{
const float p=3.14;
int r;
float area;
clrscr();
	 printf("Enter the value of r\n");
	 scanf("%d",&r);
	 area=p*r*r;
	 printf("Area of circle is %.2f\n",area);
getch();
}