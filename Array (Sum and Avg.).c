#include <stdio.h>
int main()
{
    int A[100];
    int i, n, a;
    float avg,sum=0;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);

    printf("Enter %d elements :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("index - %d : ",i);
	      scanf("%d",&A[i]);
	    }
    for(i=0; i<n; i++)
    {
    sum += A[i];
    } 
    avg = sum / n;
    printf("Average = %.2f\n", avg);
    printf("Sum of all elements is : %.2f\n", sum);
}    