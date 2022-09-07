#include<stdoio.h>
void main()
{
int *a;
int n,i;
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",a+i);
for(i=0;i<n;i++)
printf("%d",*(a+i));
}
