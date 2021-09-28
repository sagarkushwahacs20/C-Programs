#include <stdio.h>
int main()
{
    int i,A[10];
    float sum=0.0,SD=0.0, mean; 
    printf("Enter 10 elements: \n");
for(i=0;i<10; i++)
{
scanf ("%d",&A[i]);
sum=sum+A[i];
}
mean=sum/10;
for(i=0;i<10; i++)
{
SD+=pow(A[1]-mean, 2);
}
SD=sum /10;
SD= sqrt(SD);
printf("Standard deviation = %.2f\n",SD);
}