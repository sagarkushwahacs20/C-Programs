#include<stdio.h>
int main()
{
    char A[100];
    int i,l,f=0;
    printf("Enter the string\n");
    scanf("%s",A);
    l=strlen(A);

    for(i=0;i<l;i++)
    {
        if(A[i]!=A[l-i-1])
        f=1;
        break;
    }
    if(f)
    printf("String is not palindrome");
    else
    printf("String is palindrome");
    
}