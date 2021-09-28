#include<stdio.h>
int main()
{
printf("Enter the no of heads and legs");
int h,l;
scanf("%d %d",&h,&l);
int c,g;
g=(l-(2*h))/2;
c=h-g;
printf("No of chickens = %d\nNo of goats = %d",c,g);
return 0;


}
