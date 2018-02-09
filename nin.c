#include<stdio.h>
#include<conio.h>
void main()
{
int n,f=1,i;
crscr();
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("The fact value of %d is %d",n,f);

getch();
}
