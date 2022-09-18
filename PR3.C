#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,sum,sub,mul,div,per;
clrscr();
printf("Enter your number of i\n");
scanf("%d",&i);
printf("You have enter number is %d\n",i);
printf("Enter your number of j\n");
scanf("%d",&j);
printf("You have enter number is %d\n",j);
sum=i+j;
printf("addition of i and j is %d+%d=%d\n",i,j,sum);
sub=i-j;
printf("substraction of i and j is %d-%d=%d\n",i,j,sub);
mul=i*j;
printf("multipation of i and j is %d*%d=%d\n",i,j,mul);
div=i/j;
printf("division of i and j is %d/%d=%d\n",i,j,div);
per=i%j;
printf("percentage of i and j is %d&%d=%d\n",i,j,per);
getch();
}







