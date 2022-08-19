#include<stdio.h>
int main()
{
   int a[100],i,j,temp,n,flag=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      temp=a[i];
      for(j=i+1;j<n;j++)
      {
         if(temp==a[j])
         {
         flag++;
         }
      }
   }
   if(flag==0)
   {
     printf("unique");
   }
   else
   {
      printf("duplicate");
   }
   return 0;
 }
