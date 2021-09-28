#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],i;
    printf("Enter 1st string\n");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s1[i]='\0';
    printf("After copied string\n");
    puts(s2);

}