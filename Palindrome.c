#include<stdio.h>
int main()
{
    int N,Rev=0,R,M;
    scanf("%d",&N);
    N=M;
    while(N>0)
    {
        R=N%10;
        Rev=Rev*10+1;
        N=N/10;
    }
    if (Rev==M)
    printf("No. is Palindrome");
    else
    printf("No. is not Palindrome");
    return 0;

}