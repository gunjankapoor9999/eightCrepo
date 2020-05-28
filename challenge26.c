#include<stdio.h>
#include<conio.h>
int main()
{
int n,d,rem,count=0;
printf("enter a number");
scanf("%d",&n);
printf("enter the digit whose frequency is to be found");
scanf("%d",&d);
while(n>0)
{
rem=n%10;
if(rem==d)
   count+=1;
n=n/10;
}
printf("frequency of digit is %d",count);
return 0;
}
