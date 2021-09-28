#include <stdio.h>
int main()
{
    int n,i,A[100],t,j;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);

    printf("Enter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
	    printf("index - %d : ",i);
	    scanf("%d",&A[i]);
	}
    
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
    printf("Array after sorting: \n");
    for(i=0;i<=n-1;i++)
    printf("%d ",A[i]);
}