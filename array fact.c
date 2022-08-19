#include<stdio.h>
void main()
{
int a[100],i,n,fact,j,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
   if(a[i]!=1)
   {
   fact=1;
   }
   while(a[i]>1)
   {
   fact=fact*a[i]);
   a[i]--;
   }
   sum=sum+fact;
   }
   printf("%d",sum);
   return 0;
}
