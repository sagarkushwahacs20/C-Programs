#include<stdio.h>
#include<string.h>
int main()
{
    char string[100],l;
    printf("Enter your name\n");
    gets(string);
    for( l=0;string[l]!='\0';l++)
    {
    }
    printf("Length = %d",l);
    return 0;
}