#include<stdio.h>
#include<conio.h>
int main()
{
int n,rev,product=1;
printf("enter a number");
scanf("%d",&n);
while(n>0)
{
rev=n%10;
product=product*rev;
n=n/10;
}
printf("product of all digits is %d",product);
return 0;
}
