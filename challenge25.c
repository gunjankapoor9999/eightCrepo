#include<stdio.h>
#include<conio.h>
int main()
{
int n,rem,rev=0,temp;
printf("enter a number");
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(rev==temp)
   printf("number is palindrome");
else
   printf("number is not palindrome");
return 0;
}