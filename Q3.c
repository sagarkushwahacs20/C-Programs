#include<stdio.h>
#include<string.h>
int main()
{
    char A[100];
    int i,a,d,s;
    i=a=d=s=0;
    printf("Enter string\n");
    gets(A);
    
    while(A[i]!='\0')
    {
        if(A[i] >='a' && A[i] <='z' || (A[i] >='A' && A[i] <='Z'))
        {
           a++;
        }
        else if(A[i] >='0' && A[i] <='9')
        {
           d++;
        }
        else
        {
           s++;
        }
        i++;
        
    }
        printf("Alphabets are %d\n",a);
        printf("Digits are %d\n",d);
        printf("Special Characters are %d\n",s);
}
            