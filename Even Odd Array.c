#include <stdio.h>
int main()
{

 int n,arr[100000],a=0,b=1;

    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",a);
        }   
        else
        {
            printf("%d ",b);
        }
    }
    return 0;
}