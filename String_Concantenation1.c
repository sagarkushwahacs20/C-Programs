#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter 1st string\n");
    gets(s1);
    printf("Enter 2nd string\n");
    gets(s2);
    strcat(s2,s1);
    printf("After merging string\n");
    puts(s2);

}