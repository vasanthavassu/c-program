#include<stdio.h>
void main()
{
display(1,10);
}
void display(int start,int end)
{
if(start>end)
return;
else
printf("%d\n",start);
display(start+1,end);
}
