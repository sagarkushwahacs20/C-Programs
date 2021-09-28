#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    c=b;
    b=a;
    a=c;
    printf("%d %d",a,b);
    return 0;

}