#include<stdio.h>
#include<conio.h>
void main()
{
int bs,hra,da,ta,gs;
clrscr();
    printf("enter the salary value of bs is :\n");
    scanf("%d",&bs);
hra=(bs*10)/100;
   printf("enterned salary value of hra is :%d\n",hra);
da=(bs*5)/100;
  printf("enterned salary value of da is :%d\n",da);
ta=(bs*8)/100;
  printf("enterned salary value of ta is :%d\n",ta);
gs=bs+hra+da+ta;
  printf("total gross salary value is :%d\n",gs);
getch();
}


