#include <stdio.h>
int main()
{
    int A[100],n,ele,i;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);

    printf("Enter %d elements :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("index - %d : ",i);
	      scanf("%d",&A[i]);
	    }
    printf("Enter element you want to search:\n");
    scanf("%d",&ele);
    for(i=0;i<=n-1;i++)
    {
        if(A[i]==ele)
        {
            printf("Element %d found at position %d",ele,i+1);
            break;
        }
    }
    if(i==n)
    printf("Element not found");
}