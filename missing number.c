#include<stdio.h>
void main()
{
int k,i,a[100],sk=0,sa=0;
scanf("5d",&k);
for(i=1;i<=k;i++)
{
    sk=sk+i;
}
for(i=0;i<k-1;i++)
{
     scanf("%d",&a[i]);
}
for(i=0;i<k-1;i++)
{
   sa=sa+a[i];
}
if(sk>sa)
{
printf("%d",sk-sa);
}
return 0;
}
 
