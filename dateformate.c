#include<stdio.h>
#include<conio.h>
void main()
{
int d,m,y;
clrscr();
scanf("%d/",&d);
scanf("%d/",&m);
scanf("%d",&y);
if((d>0&&d<=31)&&(m>0&&m<=12)&&(y>999))
{
printf("true");
}
else
{
printf("false");
}
getch();
}
