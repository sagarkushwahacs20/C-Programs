#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enter your name\n");
    gets(string);
    int l=strlen(string);
    printf("Length = %d",l);
}