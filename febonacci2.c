#include<stdio.h>
int fib(int)
int main()
{
int i;
for(i=0;i<10;i++)
printf("%d\t",fib(i));
return(1);
}
int feb(int n)
{
if(n==0||n==1)
return(n);
else
return(fib(n-1)+fib(n-2));
}
