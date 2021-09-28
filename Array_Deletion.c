#include<stdio.h>
int main()
{
    int A[100],i,n,pos;
    printf("Enter no of elements");
    scanf("%d",&n);
    printf("Enter element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the element position");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        A[i]=A[i+1];
    }
    n--;
    printf("Deleted element is: %d \n",pos+1);
    printf("Array after deletion\n");
    for(i=0;i<n;i++)
    {
        
        printf("%d ",A[i]);
    }
    return 0;
}