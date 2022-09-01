#include<stdio.h>
#include<math.h>
int main()
{
  printf("enter a number\n");
  printf("factorial of given number is %d",fact);
  return(0);
}
int fact()
{
  int n,i,fact=1;
  scanf("%d",n);
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  return(fact);
}
  
  
