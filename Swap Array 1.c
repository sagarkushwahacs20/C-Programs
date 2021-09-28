#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int A[10000],n,i,x,j;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
        scanf("%d",&A[i]);
    for(i=0;i<=n-1;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(A[j]>A[j-1])
            {  
            x=A[j];
            A[j]=A[j-1];
            A[j-1]=x;
            }
        }
    }
    for(i=0;i<=n-1;i++)
        printf("%d ",A[i]); 
    return 0;
}
