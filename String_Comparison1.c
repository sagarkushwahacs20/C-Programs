#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100],s2[100];
    printf("Enter 1st string\n");
    gets(s1);
    printf("Enter 2nd string\n");
    gets(s1);

    if((strcmp(s1,s2))==0) 
    printf("Indentical string");
    else if((strcmp(s1,s2))==1) 
    printf("s1 has more ASCII value of mismatching string of s2");
    else 
    printf("s2 has more ASCII value of mismatching string of s1");
    
}
