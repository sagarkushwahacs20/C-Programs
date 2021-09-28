#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("Enter 1st string\n");
    gets(s1);
    strrev(s1);
    printf("After reversing string\n");
    puts(s1);

}