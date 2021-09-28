#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s1[100],s2[100];
    printf("Enter 1st string\n");
    gets(s1);
    printf("Enter 2nd string\n");
    gets(s2);
    for(i=0;s1[i]!='\0';i++)
    {
    }
    for(j=0;s2[j]!='\0';i++,j++)
    {
        s1[i]=s2[j];
    }
    s1[i]='\0';
    printf("After merging string\n");
    puts(s1);

}