#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter 1st string\n");
    gets(s1);
    strcpy(s2,s1);
    printf("After copied string\n");
    puts(s2);

}