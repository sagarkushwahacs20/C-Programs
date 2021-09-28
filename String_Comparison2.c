#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter 1st string\n");
    gets(s1);
    printf("Enter 2nd string\n");
    gets(s1);
    for(int i=0;s1[i]!='\0' && s1[i]==s2[i];i++)
    {
    if(s1[i]>s2[i])
    printf("Diff. and s1 has more ASCII value");
    else if(s1[i]<s2[i])
    printf("Diff. and s2 has more ASCII value");
    else
    printf("Identical strings");
    }5
    
}