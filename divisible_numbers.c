#include<stdio.h>
 int main()
{
int i,X,Y,a,b;
printf("enter the values of X,Y,a,b:");
scanf("%d %d %d %d",&X,&Y,&a,&b);
for(i=X;i<=Y;i++)
if(i%(a*b)==0)
{
printf("the numbers divisible by a and b from X to Y are : %d \n",i);
}
return 0;
}
