#include<stdio.h>
int main()
{
    int a,b,c;
    char ch;
    do{
        
        printf("MENU\n 1. ADD\n 2. SUB\n 3. MUL\n 4. DIV\n 5. MOD\n");
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        
        printf("Enter your choice\n");
        scanf("%d",&c);

        switch(c)
        {
            case 1: printf("SUM = %d\n",a+b);
            break;
            case 2: printf("SUB = %d\n",abs(a-b));
            break;
            case 3: printf("MUL = %d\n",a*b);
            break;
            case 4: printf("DIV = %d\n",a/b);
            break;
            case 5: printf("MOD = %d\n",a%b);
            break;
            default: printf("Invalid");
        }
        printf("Do you want to continue then Press Y for YES or N for NO\n");
        scanf("%*c %c",&ch);
        
     }
    while(ch=='Y'||ch=='y');
    printf("THANK YOU");
}