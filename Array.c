#include <stdio.h>
int main()
{
    int n,i,A[100];
    printf("Enter the number of elements : \n");
    scanf("%d",&n);

    printf("Enter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
	    printf("index - %d : ",i);
	    scanf("%d",&A[i]);
	}
}