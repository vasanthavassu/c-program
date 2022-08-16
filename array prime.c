#include<stdio.h>
void main()
{
int arr[5];
int i;
printf("enter elements into array");
for(i=0;i<5;i++)
scanf("5D",&arr[i]);
int j;flag=0;
printf("the prime of array\n");
for(i=o;i<5;i++)
{
flag=0;
for(j=2;j<arr[i];j++)
{
if(arr{i].j==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d\t",arr[i]);
}
}
