#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int total,temp,i,array[10000];
    scanf("%d",&total);
    for(i=0; i<total; i++)
    scanf("%d",&array[i]);
    for(i=0;i < total;i+=2)
    {
        if(i+1 == total)
        {
            break;
        }
        temp = array[i];
        array[i]  = array[i+1];
        array[i+1]= temp;
    }
    for(i=0; i<total; i++)
    {
        printf("%d ",array[i]);
    }

}