#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[1000];
    int i,j,c=0;
    for(i=0;i<11;i++)
    {
        scanf("%s",&str[i]);
    }
    for(j=0;j<=9;j++)
    {
        c=0;
        for(i=0;i<11;i++)
        {
            if(str[i]==j)
            {
                c++;
            }
        }
        printf("%d\t",c);
    }
   /*Enter your code here.Read input from STDIN.Print output to STDOUT*/
    return 0;
}
