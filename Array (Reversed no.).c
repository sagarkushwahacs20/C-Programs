#include<stdio.h>
int main()
{
    int A[1000],n,i;
    printf("Enter the size of Array upto 1000: \n");
    scanf("%d",&n);
    printf("Enter %d elements: \n",n);
    for(i=0;i<=n-1;i++)
    scanf("%d",&A[i]);
    printf("Reversed elements are: ");
    for(i=n-1;i>=0;i--)
    printf("%d ",A[i]);
}