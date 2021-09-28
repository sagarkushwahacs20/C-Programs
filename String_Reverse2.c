#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],i,j,t;
    printf("Enter 1st string\n");
    gets(s1);
    for(i=0;s1[i]!=0;i++)
    {
    }
    i=i-1;
    j=0;
    while(j<i)
    {
        t=s1[j];
        s1[j]=s1[i];
        s1[i]=t;
        j++;
        i--;
    }
    printf("After reversing string\n");
    puts(s1);

}