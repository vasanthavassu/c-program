#include<stdio.h>
void main()
{
int arr[100],i,a=0,b=1,c;
printf("%d\t%d",a,b);
c = a + b;
while(c<=100)
{
printf("\t%d\t",c);
a=b;
b=c;
c=a+b;
}
return0;
}
