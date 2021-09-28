#include <stdio.h>
int main()
{
    int A[100],n,i,ele;
    printf("Element you want to search");
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